// ������ Ŭ�������� ������ �ʱ�ȭ

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

	//// �Ʒ�ó�� �ۼ��ϴ� ����� ����
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
	//								// padding ������ size�� ��Ȯ�� ���� ����


	
	C c(1024, 3.14, 'a');
	// �����ڴ� A -> B -> C ����
	// �Ҹ��ڴ� C -> B -> A ����
	
	return 0;
}