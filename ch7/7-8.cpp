// 매개변수(parameter)의 기본값

#include <iostream>
#include "ch7.h"

using namespace std;

// void print(int x = 10, int y = 20, int z = 30);	// in header
												// header file에서 default를 입력해주면
												// 정의할 때 default를 하면 안 됨

// parameter에 아무것도 넣지 않으면 default값을 지정해줌
void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z <<  endl;
}


//int main()
//{
//	print();
//	print(100);
//	print(100, 200);
//	print(100, 200, 300);
//
//
//}