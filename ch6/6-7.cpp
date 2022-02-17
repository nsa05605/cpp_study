// 포인터(pointer)의 기본적인 사용법

#include <iostream>
#include <typeinfo>

using namespace std;

//int main()
//{
//	int x = 5;
//	double d = 1.0;
//
//	cout << x << endl;
//	cout << &x << endl;		// & : address-of operator
//	cout << (int)&x << endl;
//
//	// de-reference operator (*)
//
//	cout << *&x << endl;	// 위에서 지정한 x 변수의 주소 앞에 *를 입력하면 x 변수를 확인할 수 있다
//
//	int *ptr_x = &x;
//	double* ptr_d = &d;
//
//	cout << ptr_x << endl;
//	cout << *ptr_x << endl;
//
//	cout << ptr_d << endl;
//	cout << *ptr_d << endl;
//
//	cout << typeid(ptr_x).name() << endl;
//	cout << typeid(ptr_d).name() << endl;
//
//}