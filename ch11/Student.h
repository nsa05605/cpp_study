#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int m_intelligence;

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		// : m_name(name_in), m_intelligence(intel_in)
		: Person(name_in), m_intelligence(intel_in)
	{}

	void setIntel(const int& intel) {
		m_intelligence = intel;
	}
	int getIntel() {
		return m_intelligence;
	}

	void study() {
		std::cout << getName() << " is studying" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student) {
		out << student.getName() << " " << student.m_intelligence;
		return out;
	}
};