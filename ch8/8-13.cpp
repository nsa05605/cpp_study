// �͸� ��ü

#include <iostream>
using namespace std;
/*
class A
{
public:
	int m_value;

	A(const int &input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};
*/

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	/*
	// print �Լ��� �����Ϸ���
	//A a;
	//a.print();
	// �� ������� ������ �� ����

	A().print();
	A().print();
	// �� ������ε� ������
	// �̶��� a�� �������� �ʾƵ� ��
	*/

	/*
	A a(1);
	a.print();
	A(1).print();
	*/

	//Cents(3);
	//Cents(5);

	cout << add(3, 7).getCents() << endl;

	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}