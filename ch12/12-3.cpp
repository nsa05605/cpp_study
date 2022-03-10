// override, final, 공변(covariant) 반환형

#include <iostream>
using namespace std;

class A
{
public:
	virtual void print(int x) const { cout << "A" << endl; }
	virtual void print() { cout << "A" << endl; }
	virtual A* getThis() { return this; }
};

class B : public A
{
public:
	// 자식 class에서 함수를 구현할 때, 상위 class의 함수를 override 하려는 의도이면,
	// override를 붙여주어 오류 검출 가능
	// void print(char x) override { cout << "B" << endl; }
	void print(int x) const override { cout << "B" << endl; }

	// final을 붙이면 override를 여기까지만 가능하도록 막음(class C에서는 사용 불가)
	void print() final { cout << "B" << endl; }
	virtual B* getThis() { return this; }
};

class C : public B
{
public:
	void print(int x) const override { cout << "C" << endl; }
	// virtual void print() { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;
	C c;

	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;

	return 0;
}