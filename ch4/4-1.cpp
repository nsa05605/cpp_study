// ���� ������ ����(scope)�� ���ӱⰣ(duration)

#include <iostream>
using namespace std;

// ���� �̸��� �Լ� or ������ ����� �� namespace�� �������ְ�, ����� �� :: �� �ҷ��ͼ� ����� �� �ִ�.
//namespace work1
//{
//	namespace work11
//	{
//
//		int a = 1;
//		void doSomething() {
//			a += 3;
//		}
//	}
//}
//// namespace work1::work11 ���� ����� ���� ����
//
//
//namespace work2
//{
//	int a = 1;
//	void doSomething() {
//		a += 5;
//	}
//}
//
//
//int main() {
//
//	//int apple = 5;
//	//cout << apple << endl;
//
//	//{
//	//	apple = 1;
//	//	// int apple = 1;
//	//	// �߰�ȣ �ȿ��� int�� apple�� ���� �����ϸ� �ۿ��� ������ apple�� �ٸ� apple�� �����Ǵ� ���̴�.
//	//	// int apple2 ������ �ٸ� �̸����� �����ϴ� ���� �����
//
//	//	cout << apple << endl;
//	//}
//
//	//cout << apple << endl;
//
//	// ::�� ����(����) ���� ������(scope resolution operator)
//	work1::a;
//	work1::doSomething();
//
//	work2::a;
//	work2::doSomething();
//
//
//
//}