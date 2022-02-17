// std::array 소개

#include <iostream>
#include <array>

using namespace std;

void printLength(array<int, 5> my_arr)
{
	cout << my_arr.size() << endl;
}


//int main()
//{
//	int my_array[5] = { 1,2,3,4,5 };
//
//	array<int, 5> my_arr = { 1,21,3,40,5 };
//	//my_arr = { 0,1,2,3,4 };
//	//my_arr = { 0,1,2, };
//
//	//cout << my_arr[1] << endl;
//	//cout << my_arr.at(1) << endl;						// at을 쓰면 10 자리에 값이 있는지 검사를 진행
//
//	//cout << my_arr.size() << endl;
//
//	//printLength(my_arr);
//
//	for (auto element : my_arr)
//		cout << element << " ";
//	cout << endl;
//
//}