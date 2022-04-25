// 멤버 함수를 한 번 더 템플릿화하기

#include <iostream>
using namespace std;

template<class T>
class A
{
private:
	T m_value;
public:
	A(const T& input)
		: m_value(input)
	{}
	
	template<typename TT>
	//void doSomething() {
	//	cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	//}
	void doSomething(const TT &input) {
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}

	void print() {
		cout << m_value << endl;
	}
};

int main()
{
	A<int> a_int(123);

	a_int.print();

	//a_int.doSomething<float>();
	a_int.doSomething<float>(123.4f);
	a_int.doSomething(65);

	A<char> a_char('A');
	
	a_char.print();
	a_char.doSomething(1);



	return 0;
}