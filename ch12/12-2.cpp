// 가상 함수(Virtual Functions)와 다형성(Polymorphism)

#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();

	A& ref1 = b;
	ref1.print();
	A& ref2 = c;
	ref2.print();
	B& ref3 = c;
	ref3.print();
	C& ref4 = d;
	ref4.print();

	return 0;
}