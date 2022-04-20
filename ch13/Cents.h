#pragma once

#include <iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents)
		: m_cents(cents)
	{}

	friend bool operator >(const Cents& cents1, const Cents& cents2) {
		return (cents1.m_cents > cents2.m_cents);
	}

	friend std::ostream& operator <<(std::ostream& out, const Cents& cents) {
		out << cents.m_cents << " cents";
			return out;
	}
};