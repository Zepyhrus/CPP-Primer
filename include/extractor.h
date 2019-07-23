#include <torch/script.h>
#include <opencv2/opencv.hpp>
#include <boost/filesystem.hpp>

#define FEATUREDIM 512


struct ExtractorConfig {
  torch::DeviceType device_type;
  int gpu_id;

  std::string featureDir;         // dir to store all features
  std::string model_path;
};

/* generate the specific size from source image and landmark */
void FaceAlign(
	const cv::Mat& imageSrc,
	std::vector<cv::Point>& landmarks,
	cv::Mat& faceImg);

/* save file to binary file */
void WriteFeature(float* feature, std::string filename);


/* get all `files` with specific `exd` from `path` */
void GetFiles(
	std::string& root,
	std::vector<std::string>& ret);


class Extractor
{
public:
  /* properties for recognition:
   * suffix d, stands for variables on GPU;
   * suffix h, stands for variables on CPU;
   */
  std::string featureDir;   // dir to store all featuers
  int    allFeatureNumber;  // number of feature library
  std::vector<std::string> featureIDs;  // feature ids
public:
  Extractor();
  ~Extractor();

  /* initialize the model */
  int init(const ExtractorConfig& config);


  /* preprocess image */
  void preprocess(cv::Mat& imageSrc, torch::Tensor& tensor_image);


  /* generate feature vector */
  void recognize(cv::Mat& imageSrc, float* feature);

  /* read feature vector from file list */
  bool ReadFeature(float* rfea);

  /* write feature to file */
  void WriteFeature(float* feature, std::string filename);

private:
  torch::jit::script::Module mmodel;
};

