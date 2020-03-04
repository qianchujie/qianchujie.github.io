#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main()
{
	Mat image = imread("1.jpg",IMREAD_GRAYSCALE);
        namedWindow("image",CV_WINDOW_NORMAL);
	imshow("image", image);
	Mat edgeMat, edgexMat, edgeyMat;
	cv::Sobel(image, edgexMat, CV_16S, 1, 0, 3, 1, 0,BORDER_DEFAULT);
	cv::Sobel(image, edgeyMat, CV_16S, 0, 1, 3, 1, 0,BORDER_DEFAULT);
	cv::convertScaleAbs(edgexMat, edgexMat);
	cv::convertScaleAbs(edgeyMat, edgeyMat);
	cv::addWeighted(edgexMat, 0.5, edgeyMat, 0.5, 0, edgeMat);
        namedWindow("edgeMat",CV_WINDOW_NORMAL);
	cv::imshow("edgeMat", edgeMat);
	cv::waitKey(0);
	return 0;
}
