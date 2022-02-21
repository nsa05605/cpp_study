// 주소에 의한 인수 전달
// Passing Arguments by Address ( Call by Address )

#include <iostream>

using namespace std;

void foo(int *ptr)				// 이렇게 하면 ptr 주소의 값만 주는 격
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

}


//int main()
//{
//	int value = 5;
//	int* ptr = &value;
//
//	cout << value << " " << &value << " " << &ptr << endl;
//
//	foo(ptr);
//	foo(&value);
//	// foo(5)
//}