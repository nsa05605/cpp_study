// 다양한 반환 값들
// 값, 참조, 주소, 구조체, 튜플

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
//	//int value = *getValue_A(3);				// 주소를 받아오는 것은 권장하지 않음
//
//	//int* array = allocateMemory(1024);
//	//delete[] array;							// 이러한 방식으로 동적할당을 하는 것도 권장하지 않음
//
//
//	//int value = getValue(5);
//	//cout << value << endl;
//
//	//array<int, 100> my_array;
//	//my_array[30] = 10;
//
//	//// my_array[30] = 1024; 와 동일
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
//	// C++ 17에선 아래도 가능
//	//auto [a, d] = getTuple();
//	//cout << a << endl;
//	//cout << d << endl;
//
//}