#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  
  rosbot.move_forward(5.0);

  float goal = 8.0;
  float x = rosbot.get_position(1);
 
  if (x <= goal) {
      rosbot.move_forward(1);
      rosbot.stop_moving();
  } else {
      rosbot.stop_moving();
  }

  return 0;
}