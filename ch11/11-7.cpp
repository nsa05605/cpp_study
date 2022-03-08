// 상속 받은 함수를 오버라이딩 하기

#include <iostream>
using namespace std;

class Base
{
private:
	int m_i;
public:
	Base(int i_in)
		: m_i(i_in)
	{}
	void print() {
		cout << "I'm Base" << endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Base& b) {
		out << "This is base output " << endl;
		return out;
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
	void print() {
		Base::print();
		cout << "I'm Derived" << endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Derived& d) {
		cout << static_cast<Base>(d);
		out << "This is derived output " << endl;
		return out;
	}
};


int main()
{
	//Base base(5);
	//base.print();

	//Derived derived(7.0);
	//derived.print();

	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;



	return 0;
}