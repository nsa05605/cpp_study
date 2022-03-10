// 가상 소멸자

#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base()" << endl;
	}
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;
public:
	Derived(int length) {
		m_array = new int[length]{1,3,9,};
		cout << "Derived()" << endl;
	}

	// 이름이 다르지만 override에 error가 없음
	~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}

	const int& operator [] (const int index) const {
		return m_array[index];
	}


};

int main()
{
	// Derived derived(5);

	//Derived* derived = new Derived(5);


	//Base* base = derived;
	//cout << base << endl;
	//delete base;

	Derived derived(5);
	for (int i = 0; i < 5; ++i) {
		cout << derived[i] << endl;
	}


	return 0;
}