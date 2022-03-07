#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string m_name;
	int m_intelligence;
public:
	Student(const string& name = "No Name", const int& intel = 0)
		: m_name(name), m_intelligence(intel)
	{}

	void setName(const string& name) {
		m_name = name;
	}
	void setIntel(const int& intel) {
		m_intelligence = intel;
	}
	int getIntel() {
		return m_intelligence;
	}

	friend ostream& operator << (ostream& out, const Student& student) {
		out << student.m_name << " " << student.m_intelligence;
		return out;
	}
};