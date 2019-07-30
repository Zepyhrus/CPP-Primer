#define FEATUREDIM 512

/* TODO: at current stag, the final struct of people remains unclear,
 * current people_t struct is used only for testing.
 */
typedef struct _people_t {
	/* recognize code:
	 * 		-9: initial state, no recognize process happened;
	 * 		-4: no model available
	 * 		-3: loaded wrong model, or unknown error happed during FP
	 * 		-2: image read failed;
	 * 		-1: no face detected in the image;
	 * 		 0: the resule is proper returned
	 */
	int code = -9; // initial state, unrecognized

	int age = -1;
  int age_group = -1;
	int gender = -1;

	float feature[FEATUREDIM] = { 0.0 };

	char version[40]; // model version
  float quality;
} people_t;




extern "C" void LoadModel();
extern "C" void ExtractFeature(const char* image_file, people_t* p1);
extern "C" void ReleaseModel();
