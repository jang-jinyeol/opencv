#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat mat1 = Mat::zeros(3, 4, CV_8UC1);// 0���� �ʱ�ȭ�� 3X4 ���, unsigned char, 1-channel

	for (int i = 0; i < mat1.rows; i++) {
		for (int j = 0; j < mat1.cols; j++) {

			mat1.at<uchar>(i, j)++; //��� ����, ���ø��̱� ������ <>�ȿ� �ڷ��� ����� ��
		}
	}

	for (int i = 0; i < mat1.rows; i++) {
		uchar* p = mat1.ptr<uchar>(i); //�� ���� �κ�
		for (int j = 0; j < mat1.cols; j++) {
			p[j]++; //�� ���� �κ�
			//*(p+j)++; ���� ���� ǥ��
		}
	}
	for (MatIterator_<uchar> it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++) {
		(*it)++; //�� ����
	}

	cout << "mat1:\n" << mat1 << endl; // 0���� 3���� �����Ǿ���.
	return 0;
}

