// 캡슐화(Encapsulation), 접근 지정자(Access Specifiers), 접근 함수(Access Functions)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
// public:			// access specifier
private:			// public이 없으면 private이 기본
					// 캡슐화를 위해 private를 사용
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
//	// struct를 class로 바꾸면 위의 내용은 error가 발생함
//	// class 내부의 data를 변경하려고 시도하기 때문
//	// class 상단에 public: 을 적어주면 해결
//
//	// private으로 해놓으면(캡슐화) 아래처럼 적어야 함
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