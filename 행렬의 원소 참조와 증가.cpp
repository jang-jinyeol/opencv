#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat mat1 = Mat::zeros(3, 4, CV_8UC1);// 0으로 초기화된 3X4 행렬, unsigned char, 1-channel

	for (int i = 0; i < mat1.rows; i++) {
		for (int j = 0; j < mat1.cols; j++) {

			mat1.at<uchar>(i, j)++; //행렬 참조, 템플릿이기 때문에 <>안에 자료형 써줘야 함
		}
	}

	for (int i = 0; i < mat1.rows; i++) {
		uchar* p = mat1.ptr<uchar>(i); //행 증가 부분
		for (int j = 0; j < mat1.cols; j++) {
			p[j]++; //열 증가 부분
			//*(p+j)++; 위와 같은 표현
		}
	}
	for (MatIterator_<uchar> it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++) {
		(*it)++; //값 증가
	}

	cout << "mat1:\n" << mat1 << endl; // 0에서 3으로 증가되었다.
	return 0;
}

