// 소멸자(Destructor)

#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}

	// constructor에서 new int로 생성했기 때문에
	// destructor에서 delete로 삭제해주어야 함
	~IntArray()
	{
		if(m_arr != nullptr)
			delete[] m_arr;
	}

	int size() { return m_length; }
};
/*
int main()
{
	/*
	//Simple s1(0);
	//Simple s2(1);
	// 위처럼 하면 소멸자(destructor)는 역순으로 발생

	Simple* s1 = new Simple(0);
	Simple s2(1);

	delete s1;
	// delete를 넣어주면 destructor가 먼저 실행됨
	// 만약 delete를 넣어주지 않으면 destructor가 실행 x
	*/

	while (true)
	{
		IntArray my_int_arr(10000);
	}
	
}
*/