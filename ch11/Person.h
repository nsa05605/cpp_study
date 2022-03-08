#pragma once
#include <iostream>

class Person
{
protected:
	std::string m_name;
public:
	//Person()
	//	: m_name("No Nmae")
	//{}
	Person(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}
	void setName(const std::string& name_in) {
		m_name = name_in;
	}
	std::string getName() const {
		return m_name;
	}
	void doNothing() const {
		std::cout << m_name << " is do nothing " << std::endl;
	}
};