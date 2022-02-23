// Class와 Const

#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
	int m_value = 0;

	// Copy Constructor
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void	setValue(int value) { m_value = value; }
	int		getValue() const
	{
		return m_value;
	}
};

// &로 받아오면 같은 주소가 출력됨
void print(const Something &st)
// void print(Something st)
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}

class Something_string
{
public:
	string m_value = "default";

	const string& getValue() const {
		cout << "const version" << endl;
		return m_value;
	}
	string& getValue() {
		cout << "non-const version" << endl;
		return m_value; }

};

int main()
{
	// Something something;
	// something.setValue(3);
	// cout << something.getValue() << endl;

	// class를 선언할 때 const를 사용하면 error가 발생함
	// const Something som2;
	//som2.setValue(3);
	// cout << som2.getValue() << endl;
	// 위의 함수에서 getValue() const로 수정해주면 error는 해결
	// setValue() 함수는 값을 바꾸는 함수이기 때문에 const를 붙일 수 없음


	// cout << &something << endl;
	// print(something);

	Something_string something;
	something.getValue() = 10;

	const Something_string something2;
	something2.getValue(); // = 1024 -> error

	return 0;
}