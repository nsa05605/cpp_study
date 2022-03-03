// 대입 연산자 오버로딩
// 깊은 복사(Deep copy) vs 얕은 복사(Shallow copy)

#include <iostream>
#include <cassert>
using namespace std;

class MyString
{
// private:
public:
	char* m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		// 문자열이 비어 있지 않은가를 확인하기 위해 assert
		assert(source);
		
		// 글자 수 외에 마지막에 마지막이라는 것을 표시하기 위해 +1
		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i) {
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\0';
	}

	MyString(const MyString& source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;

		// 메모리를 갖고 있는 경우
		if (source.m_data != nullptr) {
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i) {
				m_data[i] = source.m_data[i];
			}
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString& source) {
		//// shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;
		cout << "Assignment operator " << endl;

		if (this == &source)	// prevent self-assignment
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr) {
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i) {
				m_data[i] = source.m_data[i];
			}
		}
		else
			m_data = nullptr;

		return *this;
	}

	~MyString() { delete[] m_data; }

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	MyString hello("Hello");
	MyString str1 = hello;	// copy
	MyString str2;
	str2 = hello;			// assignment


	//cout << (int*)hello.m_data << endl;
	//cout << hello.getString() << endl;

	//{
	//	// 복사 생성자
	//	// 구현하지 않았으면 기본 복사 생성자
	//	MyString copy = hello;
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}

	//cout << hello.getString() << endl;

	return 0;
}