#include <stdlib.h>
#include <stdio.h>
extern "C" {
	#include "interface.h"
}


int main(int argc, char** argv) 
{
	/* preprocess, initialize the marker and the extractor */
	size_t extractor;  // size_t: long unsigned int
	const char image_file[128] = "/home/sherk/Workspace/CPP/FaceRecognition/image/01273.jpg";

	LoadModel();

	people_t* p1 = new people_t;
	
	ExtractFeature(image_file, p1);

	printf("Result: %d\n", p1->code);
	
	ReleaseModel();

	return 0;
}
