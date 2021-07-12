#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat img1 = imread("lenna.bmp");
	Mat img2 = img1;	//얕은 복사 생성자
	Mat img3;
	img3 = img1;	//대입 연산자
	Mat img4 = img1.clone();	//깊은 복사 생성자
	Mat img5;
	img1.copyTo(img5);	//깊은 복사 생성자
	img1.setTo(Scalar(0, 255, 255)); //Yellow
	

	imshow("img1", img1);
	imshow("img2", img2); //얕은 복사 생성자
	imshow("img3", img3); //대입 연산자
	imshow("img4", img4); //깊은 복사 생성자
	imshow("img5", img5); //깊은 복사 생성자


	waitKey();
	destroyAllWindows();

	
	return 0;
}

