// 복사 생성자, 복사 초기화, RVO(Return Value Optimization)

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}
	Fraction(const Fraction &fraction)	// copy constructor
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

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	/*
	Fraction frac(3, 5);

	// Fraction fr_copy(frac);
	Fraction fr_copy = frac;
	Fraction fr_copy2 = fr_copy;
	Fraction fr_copy3(Fraction(3, 10));
	// 마지막은 copy_constructor가 실행되지 않음


	cout << frac << " " << fr_copy << endl;
	cout << frac << " " << fr_copy2 << endl;
	cout << frac << " " << fr_copy3 << endl;
	*/
	
	// 아래를 Debug에서 출력하면 copy construct라는 것이 출력이 되면서 주소가 다르게 나오는데
	// release에서 출력하면 copy도 출력이 되지 않고 주소가 동일하게 나온다.
	Fraction result = doSomething();
	cout << result << endl;
	cout << &result << endl;

	return 0;
}