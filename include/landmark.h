#include <torch/script.h>
#include <opencv2/opencv.hpp>

#define LANDMARKNUMBER 5

typedef void* MarkerDriver;


struct LandmarkerConfig {
  torch::DeviceType device_type;
	int gpu_id;
	
	std::string net_all;
  std::string net_top;
  std::string net_bot;
};


class Landmarker {
public:
	Landmarker();
	~Landmarker();

	/* initialize the model */
  int init(const LandmarkerConfig config);

	/* image preprocess */
	void preprocess(
		cv::Mat& input,
		torch::Tensor& tensor_image);
	

	/* 3 different types of regression WRT all, top half, bottom half */
	void mark(torch::Tensor& tensor_image, std::vector<float>& regs, int type);

	/* take the input and regress the landmarks in percentage of input size */
	float* regress(cv::Mat& input);

	/* take the input cv::Mat image and output landmarks */
  std::vector<cv::Point> detect_landmark(
		const cv::Mat& imageSrc, cv::Rect faceBoxes);

	
private:
	/* all the 3 model */
  torch::jit::script::Module mmod_all;
	torch::jit::script::Module mmod_top;
	torch::jit::script::Module mmod_bot;
};


