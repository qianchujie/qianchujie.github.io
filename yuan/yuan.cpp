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
   vector<Vec3f> circles;
  HoughCircles(scr, circles, HOUGH_GRADIENT, 1, 30,100, 30, 10, 80  );
  
   for (size_t i = 0; i < circles.size(); i++)
    {
             
     line(image, 
         Point(cvRound(circles[i][0]), cvRound(circles[i][1])-5),
         Point(cvRound(circles[i][0]), cvRound(circles[i][1])+5),
         Scalar(0, 0, 255), 3);

     line(image, 
         Point(cvRound(circles[i][0])-5, cvRound(circles[i][1])),
         Point(cvRound(circles[i][0])+5, cvRound(circles[i][1])),
         Scalar(0, 0, 255), 3);

     circle(image, 
           Point(cvRound(circles[i][0]), cvRound(circles[i][1])), 
           int(cvRound(circles[i][2])), Scalar(255, 0, 0), 3, 8, 0);
    }
namedWindow("yuan",CV_WINDOW_NORMAL);
    imshow("yuan",image);
    waitKey(0);
    return 0;
}
