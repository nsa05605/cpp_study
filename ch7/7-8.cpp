// �Ű�����(parameter)�� �⺻��

#include <iostream>
#include "ch7.h"

using namespace std;

// void print(int x = 10, int y = 20, int z = 30);	// in header
												// header file���� default�� �Է����ָ�
												// ������ �� default�� �ϸ� �� ��

// parameter�� �ƹ��͵� ���� ������ default���� ��������
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