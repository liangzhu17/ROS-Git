#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include "communication/move_actionAction.h"

typedef actionlib::SimpleActionServer<communication::move_actionAction> Server;


// Run this callback function after receiving action's goal
void execute(const communication::move_actionGoalConstPtr& goal, Server* as)
{
    ros::Rate r(1);
    communication::move_actionFeedback feedback;

    ROS_INFO("robot %d is processing.", goal->robot_id);

    // Aussume the moving process and send feedback with a frequency of 1hz
    for(int i=1; i<=10; i++)
    {
        feedback.percent_complete = i * 10;
        as->publishFeedback(feedback);
        r.sleep();
    }

    // Send feedback to client when action finishes
    ROS_INFO("robot %d finishes moving.", goal->robot_id);
    as->setSucceeded();
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "move_server");
    ros::NodeHandle n;

    // Define a server
    Server server(n, "move", boost::bind(&execute, _1, &server), false);
    
    // Start the server
    server.start();

    ros::spin();

    return 0;
}
