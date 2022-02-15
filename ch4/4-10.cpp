// 구조체(struct)

#include <iostream>
#include <string>

using namespace std;

// void printPerson(double height, float weight, int age)
// 위처럼 많은 input이 들어가야함

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

//// 구조체 안에 구조체를 넣을 수도 있음
//struct Family
//{
//	Person me, mom, dad;
//
//};

//// 함수 return으로 Person을 받는 것도 가능
//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "Jihoon" };
//
//	return me;
//}

// 아래의 함수는 "."을 계속 찍어줘야하는 번거로움이 있다.
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
//	////// 과거에는 이렇게 정의했는데 최근에는 위처럼 {}로 정의
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
//	//// 다양한 형태 모두 가능
//
//	//Person me_from_func = getMe();
//	//me_from_func.print();
//
//	Employee emp1; // Employee 1명을 표현하는데 필요한 data는 14 bytes
//
//	cout << sizeof(Employee) << endl;
//	// sizeof를 찍어보면 16이 나옴
//	// 2 + (2) + 4 + 8 = 16 // padding
//
//	return 0;
//
//}