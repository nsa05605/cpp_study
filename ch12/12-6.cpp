// 가상 (함수) 표 (Virtual Tables)

#include <iostream>
using namespace std;

class Base
{
public:
	// FunctionPointer *_vptr
	virtual void func1() {};
	void func2() {};
};

class Der : public Base
{
public:
	// FunctionPointer *_vptr
	void func1() {};
	void func3() {};
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;


	return 0;
}