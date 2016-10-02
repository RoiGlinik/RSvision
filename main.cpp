#include <opencv2\core.hpp>
#include <opencv2\opencv.hpp>
#include <iostream>

int main() {
	//directory from starting is the same as the main.cpp directory.
	cv::Mat img = cv::imread("img\\astronuat.png",1);
	if (NULL == img.data){
		std::cout << "Error loading image!" << std::endl;
		exit(0);
	}
	cv::imshow("Title", img);
	cvWaitKey(5000);
}