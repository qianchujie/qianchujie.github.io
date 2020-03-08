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
	float prewittx[9] =             
    {    
        -1,0,1,    
        -1,0,1,    
        -1,0,1    
    };    
    float prewitty[9] =     
    {    
        1,1,1,    
        0,0,0,    
        -1,-1,-1    
    };    
    Mat px=Mat(3,3,CV_32F,prewittx);  
	cout<<px<<endl;
    Mat py=Mat(3,3,CV_32F,prewitty);  
	cout<<py<<endl;
    Mat dstx=Mat(image.size(),image.type(),image.channels());  
    Mat dsty=Mat(image.size(),image.type(),image.channels());  
    Mat dst=Mat(image.size(),image.type(),image.channels());  
    filter2D(image,dstx,image.depth(),px);  
    filter2D(image,dsty,image.depth(),py);  
    float tempx,tempy,temp;  
    for(int i=0;i<image.rows;i++)  
    {  
        for(int j=0;j<image.cols;j++)  
        {  
            tempx=dstx.at<uchar>(i,j);  
            tempy=dsty.at<uchar>(i,j);  
            temp=sqrt(tempx*tempx+tempy*tempy);  
            dst.at<uchar>(i,j)=temp;  
        }  
    }  
    namedWindow("prewitt",CV_WINDOW_NORMAL);
        imshow("prewitt", dst);
        waitKey(0);
	return 0;  
} 

