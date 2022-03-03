// 비교 연산자 오버로딩 하기

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const {
		// !Cents(...) -> True
		return (m_cents == 0) ? true : false;
	}

	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}
	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	//Cents cents1(6);
	//Cents cents2(0);

	//if (cents1 == cents2)
	//	cout << "Equal" << endl;
	//else
	//	cout << "Not Equal" << endl;

	//if (cents1 != cents2)
	//	cout << "Not Equal" << endl;
	//else
	//	cout << "Equal" << endl;

	//cout << std::boolalpha;



	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; +i)
		arr[i].getCents() = i;
	std::random_shuffle(begin(arr), end(arr));
	//std::random_device rd;
	//std::mt19937 g(rd());
	//std::shuffle(arr.begin(), arr.end(), g);

	for (auto& e : arr) {
		cout << e << " ";
	}
	cout << endl;

	return 0;
}