// 정적 멤버 함수

#include <iostream>
using namespace std;

class Something
{
public:
	// inner class
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	// static은 생성자에서 초기화 불가
	Something()
		:m_value(123) // , s_value(1024)
	{}

	static int getValue()
	{
		return s_value;
		// return this->s_value;
		// static은 this->를 쓰면 error
		// return m_value;
		// this로 접근을 해야하는 모든 것이 불가능
	}
	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value; // = 1024;
Something::_init Something::s_initializer;

int main()
{
	// private로 변경하면 주석처리들이 error 발생
	//cout << Something::s_value << endl;
	// static int로 선언해주면 아래처럼 실행 가능
	cout << Something::getValue() << endl;

	Something s1;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	int (Something:: * fptr1)() = &Something::temp;
	cout << (s1.*fptr1)() << endl;

	// static
	// int (Something:: * fptr2)() = &Something::getValue;
	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;



	return 0;
}