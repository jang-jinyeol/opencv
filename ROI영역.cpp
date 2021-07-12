#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat img1 = imread("cat.bmp");
	Mat img2 = img1(Rect(220, 120, 340, 240)); //���� ���� ROI ����
	Mat img3 = img1(Rect(220, 120, 340, 240)).clone(); //���� ����  ROI ����

	img2 = ~img2; //���� ����

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();

	
	return 0;
}

