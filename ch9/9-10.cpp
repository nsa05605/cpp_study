// 변환 생성자(Converting Constructor)
// explicit, delete

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Fraction의 인수가 char이면 불가능하도록 막는 것
	Fraction(char) = delete;

	// explicit을 넣으면 생성자가 converting constructor가 되는 것을 막아준다?
	explicit Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}
	Fraction(const Fraction& fraction)	// copy constructor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}




int main()
{
	
	Fraction frac(7);
	// Fraction frac2('c');

	doSomething(frac);
	doSomething(Fraction(7));
	// doSomething(7);	// class의 생성자에서 explicit을 넣어주면 더 엄격하게 검사를 함

	return 0;
}