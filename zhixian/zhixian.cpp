#include <iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <vector>
using namespace std;
using namespace cv;
 
int main()
{
	Mat image = imread("1.png");
        namedWindow("picture",CV_WINDOW_NORMAL);
        imshow ("picture",image);
        Mat scr;
        medianBlur(image, image, 5);
        cvtColor(image,scr,COLOR_BGR2GRAY);
        GaussianBlur(scr, scr, Size(9, 9), 2, 2);
        Canny(scr,scr,10,250,5);
        namedWindow("canny",CV_WINDOW_NORMAL);
        imshow("canny",scr);
	vector<Vec4i> Lines;
	HoughLinesP(scr, Lines, 1, CV_PI / 180, 170,20,10);
        float k = 0; //直线斜率
        float b = 0; //直线截距
	for (size_t i = 0; i < Lines.size(); i++)
	{
		line(image, 
                    Point(Lines[i][0], Lines[i][1]), 
                    Point(Lines[i][2], Lines[i][3]), 
                    Scalar(0, 0, 255), 3, 8);
                    k = ((double)(Lines[i][3] - Lines[i][1])) / (double)(Lines[i][2] - Lines[i][0]); 
                    b = (double)Lines[i][1] - k * (double)Lines[i][0]; 
	}
        namedWindow("zhixian",CV_WINDOW_NORMAL);
	imshow("zhixian", image);
	printf("y=%fx+%f\n",k,b);
	waitKey(0);
	return 0;
}



