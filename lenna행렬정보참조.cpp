#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	Mat img1 = imread("lenna.bmp"); //lenna ���� �ҷ�����

	cout <<"���� �ȼ� �� : "<< img1.cols << endl; //���� �ȼ� ��
	cout <<"���� �ȼ� �� : "<< img1.rows << endl; //���� �ȼ� ��
	cout <<"ä�� �� : "<< img1.channels() << endl; //ä�� ��

	if (img1.type() == CV_8UC1) //if ä�� 1�̶��
		cout << "img1 is a grayscale image." << endl;
	else if (img1.type() == CV_8UC3)
		cout << "img1 is a truecolor image" << endl;

	float data[] = { 2.f,  1.414f, 3.f, 1.732f };
	Mat mat1(2, 2, CV_32FC1, data); //2X2, 4byte float�� 1ä��, data�迭 ����

	cout << "mat1:\n" << mat1 << endl; //mat1 ���


	return 0;
}

