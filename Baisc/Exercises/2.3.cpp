#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <iostream>
#include <list>

using namespace std;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "rosbot_node");

    RosbotClass rosbot;

    rosbot.move_forward(5);

    list<float> coordinates = rosbot.get_position_full();

    for (float coordinate : coordinates)
        cout << coordinate << " ";
    cout << endl;
    
    rosbot.stop_moving();

    return 0;
}