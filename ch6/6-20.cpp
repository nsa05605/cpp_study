// std::array �Ұ�

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
//	//cout << my_arr.at(1) << endl;						// at�� ���� 10 �ڸ��� ���� �ִ��� �˻縦 ����
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