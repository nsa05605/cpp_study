// 참조에 의한 인수 전달
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
//	// header 파일을 만들어서 pi를 전역상수로 사용 가능
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

	//// Reference에 의한 호출은 주소가 동일하고, 값도 변함


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