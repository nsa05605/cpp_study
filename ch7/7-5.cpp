// �پ��� ��ȯ ����
// ��, ����, �ּ�, ����ü, Ʃ��

#include <iostream>
#include <array>
#include <tuple>

using namespace std;


//int getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}


//// return by address
//int* getValue_A(int x)
//{
//	int value = x * 2;
//	return &value;
//}

//int* allocateMemory(int size)
//{
//	return new int[size];
//}


//// return by reference
//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int& get(array<int, 100>& my_array, int ix)
//{
//	return my_array[ix];
//}


//// return by Struct
//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s = { 1,2,3,4 };
//	return my_s;
//}


//std::tuple<int, double> getTuple()
//{
//	int a = 10;
//	double d = 3.14;
//	return std::make_tuple(a, d);
//}

//int main()
//{
//	//int value = getValue(3);
//
//
//	//int value = *getValue_A(3);				// �ּҸ� �޾ƿ��� ���� �������� ����
//
//	//int* array = allocateMemory(1024);
//	//delete[] array;							// �̷��� ������� �����Ҵ��� �ϴ� �͵� �������� ����
//
//
//	//int value = getValue(5);
//	//cout << value << endl;
//
//	//array<int, 100> my_array;
//	//my_array[30] = 10;
//
//	//// my_array[30] = 1024; �� ����
//	//get(my_array, 30) = 1024;
//
//	//cout << my_array[30] << endl;
//
//
//	//S my_s = getStruct();
//	//cout << my_s.b << endl;
//
//
//	//std::tuple<int, double> my_tp = getTuple();
//	//cout << std::get<0>(my_tp) << endl;	// a
//	//cout << std::get<1>(my_tp) << endl;	// b
//
//	// C++ 17���� �Ʒ��� ����
//	//auto [a, d] = getTuple();
//	//cout << a << endl;
//	//cout << d << endl;
//
//}