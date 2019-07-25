#include <vector>
#include <string>
#include "opencv2/core/core.hpp"
#include "mtcnn.h"
#include "landmark.h"
#include "feature.h"

#define LANDMARKNUMBER 5

struct config_t {
	bool use_gpu;
	int min_face;
	double scale_factor;

	std::string pnet_file;
	std::string rnet_file;
	std::string onet_file;

	std::string net_all;
	std::string net_top;
	std::string net_bot;

	std::string feature_model;
};


class Extractor
{
public:
	Extractor();
	~Extractor();

	bool init(const config_t& config);

	int extract(cv::Mat& image, float* feature);

public:
	DetectorDriver m_detector;
	MarkerDriver m_marker;
	FeatureDriver m_featuror;
};

DetectorDriver LoadDetectorDriver(const config_t& config);
MarkerDriver LoadMarkerDriver(const config_t& config);
FeatureDriver LoadFeatureDriver(const config_t& config);

void ReleaseDetectorDriver(DetectorDriver driver);
void ReleaseMarkerDriver(MarkerDriver driver);
void ReleaseFeatureDriver(FeatureDriver driver);




