// ����ü(struct)

#include <iostream>
#include <string>

using namespace std;

// void printPerson(double height, float weight, int age)
// ��ó�� ���� input�� ������

//struct Person
//{
//	double	height;
//	float	weight;
//	int		age;
//	string	name;
//
//	void print()
//	{
//		cout << height << " " << weight << " " << age << " " << name << endl;
//	}
//
//};

//// ����ü �ȿ� ����ü�� ���� ���� ����
//struct Family
//{
//	Person me, mom, dad;
//
//};

//// �Լ� return���� Person�� �޴� �͵� ����
//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "Jihoon" };
//
//	return me;
//}

// �Ʒ��� �Լ��� "."�� ��� �������ϴ� ���ŷο��� �ִ�.
//void printPerson(Person person_to_print)
//{
//	cout << person_to_print.height << " " << person_to_print.weight << " " << person_to_print.age << " " << person_to_print.name << endl;
//}

struct Employee
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

//int main()
//{
//	//Person me{ 2.0, 100.0, 20, "Jihoon" };
//	//Person mom;
//	//Person dad;
//	//
//	////// ���ſ��� �̷��� �����ߴµ� �ֱٿ��� ��ó�� {}�� ����
//	////me.age = 20;
//	////me.age = "Jihoon";
//	////me.height = 2.0;
//	////me.weight = 100.0;
//
//	//// printPerson(me);
//	//me.print();
//	//
//	//Person me2(me);
//	//me2.print();
//
//	//me2 = me;
//	//me2.print();
//	//// �پ��� ���� ��� ����
//
//	//Person me_from_func = getMe();
//	//me_from_func.print();
//
//	Employee emp1; // Employee 1���� ǥ���ϴµ� �ʿ��� data�� 14 bytes
//
//	cout << sizeof(Employee) << endl;
//	// sizeof�� ���� 16�� ����
//	// 2 + (2) + 4 + 8 = 16 // padding
//
//	return 0;
//
//}