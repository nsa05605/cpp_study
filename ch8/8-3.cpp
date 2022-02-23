// 생성자(Consructors)

#include <iostream>
using namespace std;

// 분수를 나타내는 class
//class Fraction
//{
//private:
//	int m_numerator;	// 분자
//	int m_denominator;	// 분모
//
//public:
//	// Fraction(){}
//	// 생성자를 생략하면 아무것도 안 하는 생성자가 있는 것
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