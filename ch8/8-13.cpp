// 익명 객체

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
	// print 함수를 실행하려면
	//A a;
	//a.print();
	// 위 방법으로 실행할 수 있음

	A().print();
	A().print();
	// 이 방법으로도 가능함
	// 이때는 a를 선언하지 않아도 됨
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