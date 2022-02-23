// this 포인터와 연쇄 호출(Chaining Member Functions)

#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		// setID(id);만 되어있으면 this-> 가 생략되어 있는 것
		this->setID(id);
		(*this).setID(id);

		cout << this << endl;
	}

	void setID(int id) {
		m_id = id;
	}
	int getID() {
		return m_id;
	}
};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	/*
	void add(int value)
	{
		m_value += value;
	}
	void sub(int value){ m_value -= value; }
	void mult(int value) { m_value *= value; }
	*/

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	//Simple s1(1), s2(2);
	//s1.setID(2);
	//s2.setID(4);

	//cout << &s1 << " " << &s2 << endl;


	Calc cal(10);
	//cal.add(10);
	//cal.sub(1);
	//cal.mult(2);
	//cal.print();

	//Calc& add(int value) { m_value += value; return *this; }
	//Calc& sub(int value) { m_value -= value; return *this; }
	//Calc& mult(int value) { m_value *= value; return *this; }
	// 위의 내용을 생성자에서 해놓으면 아래와 같이 작성 가능
	cal.add(10).sub(1).mult(2).print();
	// 위의 식은 아래와 같은 의미
	//Calc& temp1 = cal.add(10);
	//Calc& temp2 = temp1.sub(1);
	//Calc& temp3 = temp2.mult(2);
	//temp3.print();

	return 0;
}