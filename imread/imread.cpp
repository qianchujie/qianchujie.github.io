#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main()
{
Mat image = imread ("/home/qianchujie/Workspace/sandbox/imread/1.jpg",cv::IMREAD_GRAYSCALE);
namedWindow("Matches",CV_WINDOW_NORMAL);
imshow("Matches",image);
waitKey();
return 0;
}
