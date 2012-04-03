#include <cv.h>
#include <highgui.h>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <omp.h>
#include <stdio.h>

#define IMGCOMP_PSNR 1
#define IMGCOMP_SNR 2
#define IMGCOMP_SSIM 3

#define IMGCOMP_PICNOTEQUAL -1
#define IMGCOMP_FILE1FAIL -2
#define IMGCOMP_FILE2FAIL -3

float imgcomp(char* filename1, char* filename2, int CompareValueType){

// Debug
printf("%s\n%s", filename1, filename2);

// Fetching filename 1
string pPath;
pPath = getenv ("HOME");
cv::Mat_<cv::Vec3b> img = cv::imread(filename1, 1);
printf("Data size is (#cols, #rows) = (%d, %d)\n", img.cols, img.rows);
cv::Mat_<int> labels(width * height, 1);
width = img.cols;
height = img.rows;

for (int y = 0; y < img.rows; ++y) {
	for (int x = 0; x < img.cols; ++x)
	{
		vec3b = img(y, x);
		r1[y][x] = float( vec3b[0]);
		g1[y][x] = float( vec3b[1]);
		b1[y][x] = float( vec3b[2]);
	}
}


cv::Mat_<cv::Vec3b> img2 = cv::imread(filename2, 1);
printf("Data size is (#cols, #rows) = (%d, %d)\n", img2.cols, img2.rows);
cv::Mat_<int> labels(width * height, 1);
width2 = img2.cols;
height2 = img2.rows;

// Image not equal = exit
if (width!=width2 || height!=height2) {printf("\nTwo images is not in equal size.\n");return(IMGCOMP_PICNOTEQUAL);}

for (int y = 0; y < img2.rows; ++y) {
	for (int x = 0; x < img2.cols; ++x)
	{
		vec3b = img(y, x);
		r2[y][x] = float( vec3b[0]);
		g2[y][x] = float( vec3b[1]);
		b2[y][x] = float( vec3b[2]);
	}
}



} // End function
