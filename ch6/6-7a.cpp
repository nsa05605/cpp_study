// 널 포인터(Null Pointer)

#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with prt
		cout << "Null ptr, do nothing" << endl;
	}
}

//int main()
//{
//	double *ptr = nullptr;	// modern c++
//
//	doSomething(ptr);
//	doSomething(nullptr);
//	
//	double d = 123.4;
//
//	doSomething(&d);
//
//	ptr = &d;
//
//	doSomething(ptr);
//
//}