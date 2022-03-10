// override, final, ����(covariant) ��ȯ��

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
	// �ڽ� class���� �Լ��� ������ ��, ���� class�� �Լ��� override �Ϸ��� �ǵ��̸�,
	// override�� �ٿ��־� ���� ���� ����
	// void print(char x) override { cout << "B" << endl; }
	void print(int x) const override { cout << "B" << endl; }

	// final�� ���̸� override�� ��������� �����ϵ��� ����(class C������ ��� �Ұ�)
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