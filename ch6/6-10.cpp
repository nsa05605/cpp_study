// C 스타일의 문자열 기호적 상수

#include <iostream>

using namespace std;

const char* getName()
{
	return "JackJack";
}

//int main()
//{
//	//// char name[] = "Jack Jack";
//	//// char* name = "Jack Jack";		// 포인터에는 literal을 담을 수 없다.
//	//const char* name1 = "Jack Jack";
//	//const char* name2 = "Jack Jack";
//
//	//cout << (uintptr_t)name1 << endl;
//	//cout << (uintptr_t)name2 << endl;	// name과 name2를 초기화할 때 같은 값을 넣었기 때문에 같은 주소를 할당해줌
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