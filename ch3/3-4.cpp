// sizeof, comma operator

#include <iostream>

using namespace std;

//int main()
//{
//	// float a;
//	// sizeof
//	// sizeof a; // sizeof�� �Լ��� �ƴ� ������(operator)�� ()�� �ʿ� ����.
//	// sizeof(float); // float ���� ���� �������� ()�� �ʿ���
//
//	//comma
//	int x = 3;
//	int y = 10;
//	// int z = (++x, ++y);
//	// ++x;
//	// ++y;
//	// int z = y; // comma �����ڴ� ������ �������� �� �� �ִ�.
//
//	// cout << x << " " << y << " " << z << endl;
//
//	int a = 1, b = 10;
//	int z;
//
//	z = a, b;
//	// ( z = a ), b;�� ���� �Ǵµ� z�� a�� �ְ� ���� ����.
//	// z = (a, b); �� ���� ���� ��ó�� ���ȴ�.
//	// z = (++a, a + b); ������ �� �� �ִ�.
//
//	cout << z << endl;
//
//	// conditional operator (arithmetric if)
//	bool onSale = true;
//
//	//int price;
//	const int price = (onSale == true) ? 10 : 100; // �Ʒ��� if���� const int �ȿ� �־ ����� �� �ִ�.
//	// const int price = getPrice(onSale); // �Ʒ� ���� �Լ��� ����� ��
//
//	//if (onSale)
//	//	price = 10;
//	//else
//	//	price = 100;
//
//	cout << price << endl;
//
//}
//
//// ���� if ������ �Լ��� ������ ���� �Լ��ε� ������ �� �ִ�.
//int getPrice(bool onSale)
//{
//	if (onSale)
//		return 10;
//	else return 100;
//}