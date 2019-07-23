#include <cstring>
#include <iostream>
#include <gflags/gflags.h>
#include <opencv2/opencv.hpp>
#include "extractor.h"
#include "landmark.h"


/*
 * This is the right way
 * to write a multiple-line
 * comments for the program
 */

DEFINE_string(image, "", "image file name");


int main(int argc, char** argv)
{
  /* gflag initializer */
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  std::string model_path = "/home/sherk/Workspace/CPP/CPP-Primer/model";
  std::string image_path = "/home/sherk/Workspace/CPP/CPP-Primer/image";

  ExtractorConfig extraConf;
	extraConf.device_type = torch::DeviceType::CUDA;
	extraConf.gpu_id = 0;

	extraConf.model_path = model_path + "/face2.pt";
	extraConf.featureDir = "/home/sherk/Workspace/CPP/FaceRecognition/feature";

	Extractor extractor;

	extractor.init(extraConf);
	
	std::string img = "/" + FLAGS_image;	

	cv::Mat imageSrc, input;
	
  imageSrc = cv::imread(image_path + img, cv::ImreadModes::IMREAD_COLOR);

	cv::cvtColor(imageSrc, input, cv::COLOR_BGR2RGB);

  std::cout << "Here is the end." << std::endl;

  return 0;
}

