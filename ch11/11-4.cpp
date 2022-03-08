// 유도된 클래스들의 생성과 초기화

#include <iostream>
using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int &i_in)
		: m_i(i_in)
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
	int m_temp;
public:
	Child()
		: Mother(1024), m_d(1.0f), m_temp(0)
	{
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
	A(int a) {
		cout << "A : " << a << endl;
	}
	~A() {
		cout << "Destructor A" << endl;
	}
};
class B : public A
{
public:
	B(int a, double b)
	: A(a)
	{
		cout << "B : " << b << endl;
	}
	~B() {
		cout << "Destructor B" << endl;
	}
};
class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C : " << c << endl;
	}
	~C() {
		cout << "Destructor C" << endl;
	}
};

int main()
{
	//Child ch;

	//cout << sizeof(Mother) << endl;	// 4
	//cout << sizeof(Child) << endl;	// 24 ( Mother + Child )
	//								// padding 때문에 size가 정확히 맞진 않음


	
	C c(1024, 3.14, 'a');
	// 생성자는 A -> B -> C 순서
	// 소멸자는 C -> B -> A 순서
	
	return 0;
}