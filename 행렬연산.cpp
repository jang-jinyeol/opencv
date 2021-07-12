#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {
	
	float data[] = { 1, 1, 2, 3 };
	Mat mat1(2, 2, CV_32FC1, data);
	cout <<"mat1 :\n " << mat1 << endl;
	Mat mat2 = mat1.inv(); //역행렬
	cout << "mat2 :\n " << mat2 << endl;
	
	cout << "mat1.t() :\n" << mat1.t() << endl; //전치행렬
	cout << "mat1 + 3 :\n" << mat1 + 3 << endl; //각 원소에 3을 더함
	cout << "mat1 + mat2 :\n" << mat1 + mat2 << endl; //각 원소끼리 더함
	cout << "mat1 * mat2 :\n" << mat1 * mat2 << endl; //행렬 곱 역행렬을 곱했으므로 단위행렬 나옴

	return 0;
}

