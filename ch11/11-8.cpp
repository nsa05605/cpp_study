// ��� ���� �Լ�(Inherited Functions)�� ���߱�

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
	
	// Derived���� print �Լ��� ������� �ʴ� ����� �Ʒ� �� ����
	
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

	// private�� �־���� ���� �� ��
	// derived.print();

	return 0;
}