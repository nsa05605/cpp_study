// ������ ���� �μ� ����
// Passing Arguments by Reference ( Call by Reference )

#include <iostream>
#include "ch7.h"
#include "ch7_constants.cpp"
#include <vector>

using namespace std;
using namespace Constants;

//void addOne(int &y)
//{
//	y = y + 1;
//	cout << y << " " << &y << endl;
//}

//void getSinCos(const double degree, double &sin_out, double &cos_out)
//{
//	//static const double pi = 3.141592;
//	// header ������ ���� pi�� ��������� ��� ����
//	double radians = degree * pi / 180.0;
//	sin_out = std::sin(radians);
//	cos_out = std::cos(radians);
//
//}


//		 int* &ptr
//void foo(int *&ptr)
//{
//	cout << ptr << " " << &ptr << endl;
//}

void printElement(vector<int> &arr)
//void printElement(int(&arr)[4])
{

}

int main()
{
	//int x = 5;

	//cout << x << " " << &x << endl;

	//addOne(x);
	//
	//cout << x << " " << &x << endl;

	//// Reference�� ���� ȣ���� �ּҰ� �����ϰ�, ���� ����


	//double sin(0.0);
	//double cos(0.0);

	//getSinCos(30, sin, cos);

	//cout << sin << " " << cos << endl;


	//int x = 5;
	//int* ptr = &x;

	//foo(ptr);

	//cout << ptr << " " << &ptr << endl;


	/*int arr[] = { 1,2,3,4 };*/
	//vector<int> arr{ 1,2,3,4 };
	//printElement(arr);

}