#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat img1 = imread("lenna.bmp"); //lenna 사진 불러오기

	cout <<"가로 픽셀 수 : "<< img1.cols << endl; //가로 픽셀 수
	cout <<"세로 픽셀 수 : "<< img1.rows << endl; //세로 픽셀 수
	cout <<"채널 수 : "<< img1.channels() << endl; //채널 수

	if (img1.type() == CV_8UC1) //if 채널 1이라면
		cout << "img1 is a grayscale image." << endl;
	else if (img1.type() == CV_8UC3)
		cout << "img1 is a truecolor image" << endl;

	float data[] = { 2.f,  1.414f, 3.f, 1.732f };
	Mat mat1(2, 2, CV_32FC1, data); //2X2, 4byte float형 1채널, data배열 참조

	cout << "mat1:\n" << mat1 << endl; //mat1 출력


	return 0;
}

