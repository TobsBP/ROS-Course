#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  map<float,double> data;
  float x;

  RosbotClass rosbot;
  rosbot.move();

  for (int i = 0; i < 2; i++)
  {
    rosbot.move();
    x = rosbot.get_position(1);
    data[rosbot.get_time()] = x;
  }
  
  for (auto item : data)
    ROS_INFO_STREAM( "Time: " << item.first << "and" << "Position " << item.second);

  return 0;
}