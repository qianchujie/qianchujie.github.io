#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
Mat image = imread("1.jpg",IMREAD_GRAYSCALE);
Mat binary,binary_inv;
threshold(image,binary,0,255,THRESH_BINARY + THRESH_OTSU);
threshold(image,binary_inv,0,255,THRESH_BINARY_INV + THRESH_OTSU);
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

