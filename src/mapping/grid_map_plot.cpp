#include "ros/ros.h"
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

class SubscribeAndPublish {
private:
	double long_origin;
	double lat_origin;
	double long_pos_y;
	double lat_pos_y;
public:
	SubscribeAndPublish(double long1, double lat1, double long2, double lat2) {
		long_origin = long1;
		lat_origin = lat1;
		long_pos_y = long2;
		lat_pos_y = lat2;
	}
}; 

int main(int argc, char** argv) {
	if (argc < 5) {
		ROS_INFO("Insufficient argument, please provide 2 GPS coordinates (longitude and lattitude) for origin and positive y");
		return 0; 
	}
	
	double long_origin = atof(argv[1]);
	double lat_origin = atof(argv[2]);
	double long_pos_y = atof(argv[3]);
	double lat_pos_y = atof(argv[4]);
	
	SubscribeAndPublish node(long_origin, lat_origin, long_pos_y, lat_pos_y);
	
	ros::spin();
	return 0;
}
