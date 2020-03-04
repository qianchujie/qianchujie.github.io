#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
double thresh = 127;
double maxval = 255;

Mat image = imread("1.jpg",IMREAD_GRAYSCALE);
Mat binary,binary_inv;
threshold(image,binary,thresh,maxval,THRESH_BINARY);
threshold(image,binary_inv,thresh,maxval,THRESH_BINARY_INV);
imwrite("thresh_out.png",binary);
imwrite("thresh_out_inv.png",binary_inv);
namedWindow("Original Image",CV_WINDOW_NORMAL);
imshow ("Original Image",image);
namedWindow("Threshold Binary",CV_WINDOW_NORMAL);
imshow ("Threshold Binary",binary);
namedWindow("Threshold Binary Inv",CV_WINDOW_NORMAL);
imshow ("Threshold Binary Inv",binary_inv);
waitKey(0);
return 0;
}

