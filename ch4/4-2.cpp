// ���� ����(Global Variable), ���� ����(Static Variable)
// ���� ����(Internal Linkage), �ܺ� ����(External Linkage)

#include <iostream>
#include "4-2_constant.h"
//#include "4-2_constant.cpp"
//#include "4-2_test.cpp"
using namespace std;

// ����) ���� ������ �� ������� �ʴ� ���� ����.

// int value = 123; // global variable

// int a = 1;
//static int g_a = 1; // global variable�̶�� �ǹ̷� g_�� �ٿ��ִ� ��쵵 �ִ�.
//					// static�� �ٸ� cpp ���Ͽ��� ����� �� ������ �ϴ� ����
//					// internal linkage
//
//// forward declaration
//// 4-2_test.cpp ���� ������ �Լ��� ���� ����� ����
extern void doSomething(); // extern void doSomething(); ���� �ؾ��ϴµ� extern�� ����
//extern int a;

// void doSomething() {
//	static int a = 1; // static variable : ���� a�� �޸𸮷κ��� ���� ��ġ�� static�̶�� �ǹ�
//	++a;
//	cout << a << endl;
//}

int main() {
	//
	//	//cout << value << endl;
	//
	//	//int value = 1; // local variable
	//
	//	//cout << ::value << endl; // global variable �� �ҷ���
	//	//cout << value << endl;
	//
	//	//doSomething();
	//	//doSomething();
	//
	//	doSomething(); // ������ forward declaration�� ���־�� ��
	//
	//	cout << a << endl;


	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	//return 0;
}

// 