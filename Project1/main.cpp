#include <opencv2\highgui\highgui.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	char *DD = new char[100];	//Luu duong dan
	cout << "Nhap duong dan: "; 	cin >> DD;
	Mat image;			//Tao ma tran anh image
	image = imread(DD);	//Doc anh dau vao
	if (!image.data) {	//Kiem tra anh co doc duoc khong
		cout << "Khong the tim thay anh";
		system("pause");
		exit(0);
	}
	namedWindow("PICTURE", WINDOW_NORMAL);
	imshow("PICTURE", image);
	waitKey(0);
}