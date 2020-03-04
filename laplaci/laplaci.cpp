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
        Mat laplaci,lap;
        Laplacian(image, laplaci, CV_16S, 3, 1, 0,BORDER_DEFAULT);
        convertScaleAbs(laplaci,lap);
        namedWindow("laplaci",CV_WINDOW_NORMAL);
        imshow("laplaci", lap);
        waitKey(0);
	return 0;
}
