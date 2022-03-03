// ��ȯ ������(Converting Constructor)
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
	// Fraction�� �μ��� char�̸� �Ұ����ϵ��� ���� ��
	Fraction(char) = delete;

	// explicit�� ������ �����ڰ� converting constructor�� �Ǵ� ���� �����ش�?
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
	// doSomething(7);	// class�� �����ڿ��� explicit�� �־��ָ� �� �����ϰ� �˻縦 ��

	return 0;
}