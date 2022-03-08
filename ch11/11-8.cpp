// 상속 받은 함수(Inherited Functions)를 감추기

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;
public:
	Base(int i_in)
		: m_i(i_in)
	{}
	void print() {
		cout << "I'm Base" << endl;
	}

};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int i_in)
		: Base(i_in)
	{}
	
	using Base::m_i;
	
	// Derived에서 print 함수를 사용하지 않는 방법은 아래 두 가지
	
	// void print() = delete;
private:
	using Base::print;		// do not add ()
};


int main()
{
	Base base(5);
	base.print();

	Derived derived(7);
	derived.m_i = 1024;

	// private에 넣어놔서 실행 안 됨
	// derived.print();

	return 0;
}