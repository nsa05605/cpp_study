#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;
	
public:
	Storage(T value) {
		m_value = value;
	}
	~Storage() {}
	void print() {
		std::cout << m_value << " ";
	}
};

template <typename T>
class Class
{
private:
	T m_value;

public:
	Class(T value) {
		m_value = value;
	}
	~Class() {}
	void print() {
		std::cout << "template typename in Class : " << m_value << " ";
	}
};