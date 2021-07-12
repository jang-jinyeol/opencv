#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main() {
	
	float data[] = { 1, 1, 2, 3 };
	Mat mat1(2, 2, CV_32FC1, data);
	cout <<"mat1 :\n " << mat1 << endl;
	Mat mat2 = mat1.inv(); //�����
	cout << "mat2 :\n " << mat2 << endl;
	
	cout << "mat1.t() :\n" << mat1.t() << endl; //��ġ���
	cout << "mat1 + 3 :\n" << mat1 + 3 << endl; //�� ���ҿ� 3�� ����
	cout << "mat1 + mat2 :\n" << mat1 + mat2 << endl; //�� ���ҳ��� ����
	cout << "mat1 * mat2 :\n" << mat1 * mat2 << endl; //��� �� ������� �������Ƿ� ������� ����

	return 0;
}

