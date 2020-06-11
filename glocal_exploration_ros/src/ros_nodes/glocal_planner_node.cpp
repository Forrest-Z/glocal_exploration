#include "glocal_exploration_ros/planners/glocal_planner.h"

#include <ros/ros.h>
#include <glog/logging.h>


int main(int argc, char **argv) {
  ros::init(argc, argv, "glocal_planner", ros::init_options::NoSigintHandler);

  // Setup logging
  google::InitGoogleLogging(argv[0]);
  google::InstallFailureSignalHandler();
  google::ParseCommandLineFlags(&argc, &argv, false);

  // Run node
  ros::NodeHandle nh("");
  ros::NodeHandle nh_private("~");
  glocal_exploration::GlocalPlanner planner(nh, nh_private);

  ros::spin();
  return 0;
}