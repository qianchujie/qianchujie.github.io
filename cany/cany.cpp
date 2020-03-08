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

Mat dstImage, edge;
blur(image, edge, Size(3, 3));
Canny(edge, edge, 3, 9);
namedWindow("cany",CV_WINDOW_NORMAL);
imshow("cany", edge);

waitKey(0);
return 0;
}
