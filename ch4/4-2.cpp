// 전역 변수(Global Variable), 정적 변수(Static Variable)
// 내부 연결(Internal Linkage), 외부 연결(External Linkage)

#include <iostream>
#include "4-2_constant.h"
//#include "4-2_constant.cpp"
//#include "4-2_test.cpp"
using namespace std;

// 참고) 전역 변수는 잘 사용하지 않는 것이 좋다.

// int value = 123; // global variable

// int a = 1;
//static int g_a = 1; // global variable이라는 의미로 g_를 붙여주는 경우도 있다.
//					// static은 다른 cpp 파일에서 사용할 수 없도록 하는 역할
//					// internal linkage
//
//// forward declaration
//// 4-2_test.cpp 에서 선언한 함수와 변수 사용을 위함
extern void doSomething(); // extern void doSomething(); 으로 해야하는데 extern은 생략
//extern int a;

// void doSomething() {
//	static int a = 1; // static variable : 변수 a가 메모리로부터 받은 위치가 static이라는 의미
//	++a;
//	cout << a << endl;
//}

int main() {
	//
	//	//cout << value << endl;
	//
	//	//int value = 1; // local variable
	//
	//	//cout << ::value << endl; // global variable 을 불러옴
	//	//cout << value << endl;
	//
	//	//doSomething();
	//	//doSomething();
	//
	//	doSomething(); // 위에서 forward declaration을 해주어야 함
	//
	//	cout << a << endl;


	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	//return 0;
}

// 