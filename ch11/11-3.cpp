// 유도된 클래스들의 생성 순서

#include <iostream>
using namespace std;

class Mother
{
public:
	int m_i;

	Mother()
		: m_i(1)
	{
		cout << "Mother Constructor" << endl;
	}

	//// 아래처럼 작성하는 방법도 있음
	//Mother(const int &i_in = 0)
	//	: m_i(i_in)
	//{}
};

class Child : public Mother
{
public:
	double m_d;
public:
	Child()
		: m_d(1.0)
		// : Mother(), m_d(1.0)
		// 위의 Mother()가 생략되어 있는 것
	{
		m_i = 1024;
		cout << "Child Constructor" << endl;
	}
	//{
	//	m_i = 10;
	//	this->m_i = 10;
	//	Mother::m_i = 1024;
	//	this->Mother::m_i = 1024;
	//}
};


class A
{
public:
	A()
	{
		cout << "A Constructor " << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B Constructor " << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor " << endl;
	}
};

int main()
{
	//Child c1;
	//// Mother
	//// Child
	//Mother m1;
	//// Mother
	//// Child를 호출하면 Mother를 먼저 초기화하고 Child를 초기화

	C c;
	// A -> B -> C의 순서대로 상속 상단부터 실행


	return 0;
}