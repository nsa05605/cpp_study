// ������ Ŭ�������� ���� ����

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

	//// �Ʒ�ó�� �ۼ��ϴ� ����� ����
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
		// ���� Mother()�� �����Ǿ� �ִ� ��
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
	//// Child�� ȣ���ϸ� Mother�� ���� �ʱ�ȭ�ϰ� Child�� �ʱ�ȭ

	C c;
	// A -> B -> C�� ������� ��� ��ܺ��� ����


	return 0;
}