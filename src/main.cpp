#include <gflags/gflags.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <memory>
#include <math.h>
#include "extractor.h"

#define SIZE 64

// take inputs from gflags
DEFINE_string(image_file, "", "image file name");
DEFINE_string(model_path, "", "model file path");


int main(int argc, char** argv) 
{
	/* preprocess, initialize the marker and the extractor */
	gflags::ParseCommandLineFlags(&argc, &argv, true);

	config_t config;

	std::string model_path = FLAGS_model_path;

	config.use_gpu = true;
	config.min_face = 10;
	config.scale_factor = 0.79;

	config.pnet_file = model_path + "/pnet.pt";
	config.rnet_file = model_path + "/rnet.pt";
	config.onet_file = model_path + "/onet.pt";

	config.net_all = model_path + "/det3-pts.pt";
	config.net_top = model_path + "/det3-pts-eye.pt";
	config.net_bot = model_path + "/det3-pts-mouth.pt";

	config.feature_model = model_path + "/face2.pt";
	/* ------------------------------------------------------------------------- */
	/* initialize the model */
	Extractor* extractor = new Extractor;
	
	if (!extractor->init(config)) {
		printf("[ERR]: Extractor initialized failed!\n");
		printf("Please refer previous message to see what's happening.\n");
		return -1;
	} else {
		printf("[LOG]: Model initialized!\n");
	}

	/* read image from path */
	cv::Mat image = cv::imread(FLAGS_image_file);

	if (image.empty()) {
		printf("[ERR]: Image read failed!\n");
		return -1;
	} else {
		printf("[LOG]: Image loaded!\n");
	}

	/* generate the feature array */
	float feature[FEATUREDIM] = { 0.0 };
	try {
		int res = extractor->extract(image, feature);
	} catch (...) {
		printf("[ERR]: Wrong model loaded!\n");
	}

	printf("Done\n");
}
