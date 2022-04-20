#pragma once
#include <assert.h>
#include<iostream>

/*
class MyArray
{
private:
	int m_length;
	int* m_data;

public:
	MyArray() {
		m_length = 0;
		m_data = nullptr;
	}
	MyArray(int length) {
		m_data = new int[length];
		m_length = length;
	}
	~MyArray() {
		reset();
	}
	void reset() {
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}
	int& operator[] (int index) {
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}
	int getLength() {
		return m_length;
	}
	void print() {
		for (int i = 0; i < m_length; i++) {
			std::cout << m_data[i] << " ";
		}
		std::cout << std::endl;
	}
};

template<typename T>
class MyArray_T
{
private:
	int m_length;
	T* m_data;

public:
	MyArray_T()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray_T(int length) {
		m_data = new T[length];
		m_length = length;
	}

	~MyArray_T() {
		reset();
	}

	void reset() {
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator [](int index) {
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() {
		return m_length;
	}

	void print();
};

template<typename T>
void MyArray_T<T>::print() {
	for (int i = 0; i < m_length; ++i) {
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

*/
template<typename T, unsigned int T_SIZE>
class MyArray_T_int
{
private:
	T* m_data;

public:
	MyArray_T_int()
	{
		m_data = new T [T_SIZE];
	}

	~MyArray_T_int() {
		reset();
	}

	void reset() {
		delete[] m_data;
		m_data = nullptr;
	}

	T& operator [](int index) {
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	void print();
};



template<typename T, unsigned int T_SIZE>
void MyArray_T_int<T, T_SIZE>::print() {
	for (int i = 0; i < T_SIZE; ++i) {
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}