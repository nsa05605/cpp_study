// ������(Consructors)

#include <iostream>
using namespace std;

// �м��� ��Ÿ���� class
//class Fraction
//{
//private:
//	int m_numerator;	// ����
//	int m_denominator;	// �и�
//
//public:
//	// Fraction(){}
//	// �����ڸ� �����ϸ� �ƹ��͵� �� �ϴ� �����ڰ� �ִ� ��
//	Fraction(const int &num_input = 1, const int &den_input = 1)			// constructor
//	{
//		m_numerator = num_input;
//		m_denominator = den_input;
//
//		cout << "Fraction() constructor" << endl;
//	}
//
//	void print()
//	{
//		cout << m_numerator << " / " << m_denominator << " = " << (float)m_numerator / m_denominator << endl;
//	}
//};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};
/*
int main()
{
	//Fraction frac;
	//frac.print();

	//Fraction one_thirds(1, 3);
	//one_thirds.print();

	//Fraction two_thirds = Fraction{ 2,3 };
	//two_thirds.print();

	First fir;


}
*/