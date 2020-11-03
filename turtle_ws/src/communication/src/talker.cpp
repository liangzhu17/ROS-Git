
#include <ros/ros.h>
#include <turtlesim/Spawn.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>

ros::Publisher turtle_vel;

void PoseCallback(const turtlesim::PoseConstPtr& msg)
{
	ROS_INFO("Turtle2 position: (%f, %f)", msg->x, msg->y);
}

int main(int argc, char **argv)
{
  // ROS node initialize
  ros::init(argc, argv, "talker");
  
  // Create node handle
  ros::NodeHandle node;
  
  // Create the second turtle by service
  ros::service::waitForService("spawn");
  ros::ServiceClient add_turtle = node.serviceClient<turtlesim::Spawn>("spawn");
  turtlesim::Spawn srv;
  srv.request.x = 5;
  srv.request.y = 5;
  srv.request.name = "turtle2";
  add_turtle.call(srv);
  
  ROS_INFO("Turtle2 has been spawn.");
  // Subscribe turtle's Pose message
  ros::Subscriber sub = node.subscribe("turtle2/pose", 10, &PoseCallback);

  // Create the publischer to control speed
  turtle_vel = node.advertise<geometry_msgs::Twist>("turtle2/cmd_vel", 10);
  
 
  // Set Loop frequency
  ros::Rate loop_rate(10.0);

  while (node.ok())
  {
	// Publish velocity controlling command line
    geometry_msgs::Twist vel_msg;
    vel_msg.angular.z = 1;
    vel_msg.linear.x = 1;
    turtle_vel.publish(vel_msg);
   
	// Looping and process callbacks
    ros::spinOnce();
    
	
	// Set sleep function according to looping frequency, not occupy too much CPU resources 
    loop_rate.sleep();
    
  }

  return 0;
}
