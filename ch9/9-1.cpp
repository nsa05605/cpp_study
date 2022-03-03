// 산술 연산자 오버로딩 하기

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}
	int getCents() const
	{
		return m_cents;
	}
	int& getCents() { return m_cents; }

	// friend로 설정
	//friend Cents operator + (const Cents& c1, const Cents& c2)
	//{
	//	return Cents(c1.getCents() + c2.getCents());
	//}
	
	// member로 설정
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
	// =, [index], (), ->
	// 위의 연산자들은 member로만 가능
};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
	c_out.getCents() = c1.getCents() + c2.getCents();
}

// 최근에는 return으로 받는 경향이 많음
Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;
	add(cents1, cents2, sum);
	add(cents1, cents2);

	cout << sum.getCents() << endl;
	cout << add(cents1, cents2).getCents() << endl;
	cout << (cents1 + cents2).getCents() << endl;
	cout << (cents1 + cents2 + Cents(6)).getCents() << endl;



	return 0;
}