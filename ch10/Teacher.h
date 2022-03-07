#pragma once
#include <iostream>
using namespace std;

class Teacher
{
private:
	string m_name;

public:
	Teacher(const string& name = "No Name")
		:m_name(name)
	{}
	string getName() {
		return m_name;
	}
	friend ostream& operator << (ostream& out, const Teacher& teacher) {
		out << teacher.m_name;
		return out;
	}
};