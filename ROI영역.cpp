#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat img1 = imread("cat.bmp");
	Mat img2 = img1(Rect(220, 120, 340, 240)); //얕은 복사 ROI 영역
	Mat img3 = img1(Rect(220, 120, 340, 240)).clone(); //깊은 복사  ROI 영역

	img2 = ~img2; //영상 반전

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();

	
	return 0;
}

