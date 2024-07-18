#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <iostream>
#include <list>
using namespace std;

list<float> move_and_inform(RosbotClass rosbot, float time)
{
    list<float> coordinates;

    rosbot.move_forward(time);

    for (int i = 1; i <= 2; i++)
        coordinates.push_back(rosbot.get_position(i));
    
    return coordinates;
}

string trajectory(RosbotClass rosbot)
{
    rosbot.move_forward(1);
    rosbot.turn(clockwise, 2);
    rosbot.move_forward(4);
    rosbot.turn(counterclockwise, 2);
    
    return "trajectory successful";
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "rosbot_node");

    RosbotClass rosbot;

    string res = trajectory(rosbot);

    return 0;
}