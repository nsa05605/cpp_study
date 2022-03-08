// 상속의 기본(1)
// Inheritance(is-a relationship)

#include <iostream>
using namespace std;

class Mother
{
//private:
protected:
	int m_i;

public:
	Mother()
		: m_i(0)
	{}
	Mother(const int& i_in)
		: m_i(i_in)
	{
		cout << "Mother Constructor" << endl;
	}

	void setValue(const int& i_in) {
		m_i = i_in;
	}
	int getValue() {
		return m_i;
	}
};

// Child를 Mother에 상속
// 여기서 Child는 derived class라 부름
class Child : public Mother
{
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)
	//	: m_i(i_in), m_d(d_in)
		: Mother(i_in), m_d(d_in)
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
	}

	void setValue(const int& i_in, const double& d_in) {
		// Mother class에서 private으로 m_i가 정의되어 있으면 사용할 수 없음
		// protected로 바꾸면 상속된 class에 한해 사용 가능
		Mother::setValue(i_in);
		this->setValue(d_in);
	}

	void setValue(const double& d_in) {
		m_d = d_in;
	}
	double getValue() {
		return m_d;
	}
};

// Mother 하나에 여러 개의 class를 상속 가능
class Daughter : public Mother
{

};
class Son : public Mother
{

};

int main()
{
	Mother mother(1024);
	// mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(1024, 128);
	//child.Mother::setValue(1024);		// 이런 방식으로 Mother의 함수를 사용 가능
	//child.setValue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}