// C ��Ÿ���� ���ڿ� ��ȣ�� ���

#include <iostream>

using namespace std;

const char* getName()
{
	return "JackJack";
}

//int main()
//{
//	//// char name[] = "Jack Jack";
//	//// char* name = "Jack Jack";		// �����Ϳ��� literal�� ���� �� ����.
//	//const char* name1 = "Jack Jack";
//	//const char* name2 = "Jack Jack";
//
//	//cout << (uintptr_t)name1 << endl;
//	//cout << (uintptr_t)name2 << endl;	// name�� name2�� �ʱ�ȭ�� �� ���� ���� �־��� ������ ���� �ּҸ� �Ҵ�����
//
//	//const char* name3 = getName();
//	//const char* name4 = getName();
//
//	//cout << (uintptr_t)name3 << endl;
//	//cout << (uintptr_t)name4 << endl;
//
//	//int int_arr[5] = { 1, 2, 3, 4, 5 };
//	//char char_arr[] = "Hello, World!";
//	//const char* name = "Jack Jack";
//
//	//cout << int_arr << endl;
//	//cout << char_arr << endl;
//	//cout << name << endl;
//
//	char c = 'Q';
//	cout << *&c << endl;
//
//
//}