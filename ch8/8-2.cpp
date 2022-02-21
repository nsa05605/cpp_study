// ĸ��ȭ(Encapsulation), ���� ������(Access Specifiers), ���� �Լ�(Access Functions)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
// public:			// access specifier
private:			// public�� ������ private�� �⺻
					// ĸ��ȭ�� ���� private�� ���
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	void setDay(const int& day_input)
	{
		m_day = day_input;
	}

	void setYear(const int& year_input)
	{
		m_year = year_input;
	}

	//int getMonth()
	//{
	//	return m_month;
	//}

	const int& getMonth()
	{
		return m_month;
	}

	int getDay()
	{
		return m_day;
	}

	int getYear()
	{
		return m_year;
	}
	
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

};

//int main()
//{
//	Date today; // { 8, 4, 2025 };
//	//today.m_month = 8;
//	//today.m_day = 4;
//	//today.m_year = 2025;
//	// struct�� class�� �ٲٸ� ���� ������ error�� �߻���
//	// class ������ data�� �����Ϸ��� �õ��ϱ� ����
//	// class ��ܿ� public: �� �����ָ� �ذ�
//
//	// private���� �س�����(ĸ��ȭ) �Ʒ�ó�� ����� ��
//	today.setDate(8, 4, 2022);
//	today.setMonth(10);
//
//	cout << today.getMonth() << endl;
//
//	Date copy;
//	copy.copyFrom(today);
//
//	cout << copy.getMonth() << endl;
//
//	return 0;
//}