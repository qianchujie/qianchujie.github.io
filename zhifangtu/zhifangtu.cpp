#include<opencv2/opencv.hpp>  
#include<iostream>  
#include<vector>   
using namespace cv;  
using namespace std;  
  
int main()  
{  
    Mat srcImage = imread("1.jpg",CV_WINDOW_NORMAL);
    namedWindow("ScrImage",CV_WINDOW_NORMAL);  
    imshow("ScrImage", srcImage);  
    int channels = 0;  
    MatND dstHist;  
    int histSize[] = { 256 }; 
    float midRanges[] = { 0, 256 };  
    const float *ranges[] = { midRanges };  
    
    calcHist(&srcImage, 1, &channels, Mat(), dstHist, 1, histSize, ranges, true, false);  
    
     Mat drawImage = Mat::zeros(Size(256, 256), CV_8UC3);  
    
    double g_dHistMaxValue;  
    minMaxLoc(dstHist, 0, &g_dHistMaxValue, 0, 0);    
   
    for (int i = 0; i < 256; i++)  
    {  
        int value = cvRound(dstHist.at<float>(i) * 256 * 0.9 / g_dHistMaxValue);  
        line(drawImage, Point(i, drawImage.rows - 1), Point(i, drawImage.rows - 1 - value), Scalar(0, 0, 255));  
    }  
  
    imshow("hist", drawImage);  
    waitKey(0);  
    return 0;  
} 
