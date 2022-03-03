// 첨자 연산자 오버로딩

#include <iostream>
#include <assert.h>
using namespace std;

class IntList
{
private:
	int m_list[10] = {1,2,3,4,5,6,7,8,9,10};

public:
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}
	int getItem(int index)
	{
		return m_list[index];
	}
	int* getItem()
	{
		return m_list;
	}
	int& operator [] (const int index) {
		return m_list[index];
	}
	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
};

int main()
{
	IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getItem()[3] = 10;
	cout << my_list.getItem()[3] << endl;
	my_list[2] = 10;
	cout << my_list[2] << endl;
	return 0;
}