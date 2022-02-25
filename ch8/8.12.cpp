// ģ�� �Լ��� Ŭ����

#include <iostream>
using namespace std;

/*
// ���1
// ���� ����(forward declaration)
class B;
// class A�� B���� ��� doSomething �Լ��� friend�� �� ��,
// �Ʒ��� �ִ� B�� A�� �𸣱� ������ ���漱���� �ʿ���

class A
{
private:
	int m_value = 1;

	friend void doSomething(A& a, B &b);
	// doSomething �Լ��� class A�� friend�� ��������

};

class B
{
private:
	int m_value = 2;

	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B &b)
{
	cout << a.m_value << " " << b.m_value << endl;
}
*/

/*
// ���2
class B;

// class B�� ���� ����
class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
	// class B �ȿ��� function ���� �ϰ�
};

class A
{
private:
	int m_value = 1;

	friend void B::doSomething(A& a);
};

// class A �Ʒ����� function ����
void B::doSomething(A& a) {
	cout << a.m_value << endl;
}
*/

int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}