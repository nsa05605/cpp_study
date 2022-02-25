// 친구 함수와 클래스

#include <iostream>
using namespace std;

/*
// 방법1
// 전방 선언(forward declaration)
class B;
// class A와 B에서 모두 doSomething 함수를 friend로 할 때,
// 아래에 있는 B를 A가 모르기 때문에 전방선언이 필요함

class A
{
private:
	int m_value = 1;

	friend void doSomething(A& a, B &b);
	// doSomething 함수를 class A의 friend로 설정해줌

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
// 방법2
class B;

// class B를 먼저 정의
class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
	// class B 안에는 function 선언만 하고
};

class A
{
private:
	int m_value = 1;

	friend void B::doSomething(A& a);
};

// class A 아래에서 function 정의
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