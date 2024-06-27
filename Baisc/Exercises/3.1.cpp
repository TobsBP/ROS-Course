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

int main(int argc, char **argv)
{
    ros::init(argc, argv, "rosbot_node");

    RosbotClass rosbot;

    list<float> coordinates = move_and_inform(rosbot, 5.9);
    
    for (auto coordinate : coordinates)
        ROS_INFO_STREAM("Coord: " << coordinate);
    cout << endl;

    return 0;
}