// �ּҿ� ���� �μ� ����
// Passing Arguments by Address ( Call by Address )

#include <iostream>

using namespace std;

void foo(int *ptr)				// �̷��� �ϸ� ptr �ּ��� ���� �ִ� ��
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