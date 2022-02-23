// ���� ��� �Լ�

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
	// static�� �����ڿ��� �ʱ�ȭ �Ұ�
	Something()
		:m_value(123) // , s_value(1024)
	{}

	static int getValue()
	{
		return s_value;
		// return this->s_value;
		// static�� this->�� ���� error
		// return m_value;
		// this�� ������ �ؾ��ϴ� ��� ���� �Ұ���
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
	// private�� �����ϸ� �ּ�ó������ error �߻�
	//cout << Something::s_value << endl;
	// static int�� �������ָ� �Ʒ�ó�� ���� ����
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