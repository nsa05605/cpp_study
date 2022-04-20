// 템플릿을 부분적으로 특수화

#include <iostream>
using namespace std;

template <class T, int size>
class StaticArray_BASE
{
private:
	T m_array[size];

public:
	T* getArray() { return m_array; }
	T& operator[] (int index) {	return m_array[index]; }
};

template <typename T, int size>
void print(StaticArray_BASE<T, size>& array) {
	for (int count = 0; count < size; count++) {
		cout << array[count] << " ";
	}
	cout << endl;
}

template <int size>
void print(StaticArray_BASE<char, size>& array) {
	for (int count = 0; count < size; count++) {
		cout << array[count];
	}
	cout << endl;
}

template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{
};

template <int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	void print(StaticArray<char, size>& array) {
		for (int count = 0; count < size; count++) {
			cout << array[count];
		}
		cout << endl;
	}
};

int main()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	print(int4);

	StaticArray<char, 14> char14;
	strcpy_s(char14.getArray(), 14, "Hello, World");

	print(char14);
	return 0;
}