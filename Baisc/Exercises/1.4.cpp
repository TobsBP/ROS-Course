#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  float time1, time2;
  double x1, x2;

  RosbotClass rosbot;

  time1 = rosbot.get_time();
  x1 =  rosbot.get_position(1);
  
  rosbot.move();

  time2 = rosbot.get_time();
  x2 =  rosbot.get_position(1);

  float velocity = (x2 - x1)/(time2 - time1);

  if (velocity < 1)
    ROS_INFO_STREAM("True");
  else
    ROS_INFO_STREAM("False");

  return 0;
}