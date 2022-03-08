// 유도된 클래스에 새로운 기능 추가하기

#include <iostream>
using namespace std;

class Base
{
//private:
//	int m_value;
protected:
	int m_value;

public:
	Base(int value)
		: m_value(value)
	{}
	int getValue() {
		return m_value;
	}

};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(Base &base, const int value) {
		Base::m_value = value;
		// do some work with the variables defined in Derived
	}

};