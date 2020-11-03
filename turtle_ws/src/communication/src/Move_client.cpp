#include <actionlib/client/simple_action_client.h>
#include "communication/move_actionAction.h"

typedef actionlib::SimpleActionClient<communication::move_actionAction> Client;

// after action is finished go to this callback function
void doneCb(const actionlib::SimpleClientGoalState& state,
        const communication::move_actionResultConstPtr& result)
{
    ROS_INFO("Yay! Move to (2.00000, 2.00000) is finished.");
    ros::shutdown();
}

// After action is activated go to this callbackfunction
void activeCb()
{
    ROS_INFO("Goal just went active");
}

// After receiving feedback go to this callbackfunction
void feedbackCb(const communication::move_actionFeedbackConstPtr& feedback)
{
    ROS_INFO(" percent_complete : %f ", feedback->percent_complete);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "move_client");

    // Define a client
    Client client ("move", true);

    // Wait for the response of server
    ROS_INFO("Waiting for action server to start.");
    client.waitForServer();
    ROS_INFO("Action server started, sending goal.");
    ROS_INFO("Move to (2.00000, 2.00000).");

    // Create a goal for the action
    communication::move_actionGoal goal;
    goal.robot_id = 1;

    // send goal to server and set callback function
    client.sendGoal(goal,  &doneCb, &activeCb, &feedbackCb);

    ros::spin();

    return 0;
}
