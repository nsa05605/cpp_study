// ���� ���� �μ� ����
//Passing Arguments by Value(Call by Value)

#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

//int main()
//{
//	doSomething(5);
//
//	int x = 6;
//
//	cout << "in main " << x << " " << &x << endl;
//
//	doSomething(x);
//	doSomething(x + 1);
//	
//	// Ȯ���غ��� doSomething �Լ����� parameter�� ���� ��ȭ�� ��� ���� ��� �ּҰ� ������
//
//
//	return 0;
//}