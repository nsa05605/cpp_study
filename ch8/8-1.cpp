// 객체지향 프로그래밍과 클래스
// Object Oriented Programming & Class

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//			print()

//struct Friend
//{
//	string	name;
//	string	address;
//	int		age;
//	double	height;
//	double	weight;
//
//	// 함수 3 : struct 안에 함수를 넣을 수 있음
//	void print()
//	{
//		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
//	}
//
//};

// 구조체 안에 함수를 넣는 경우에는 보통 struct 대신 class를 사용
class Friend
{
public:	// access specifier (public, private, protected)
	string	m_name;
	string	m_address;
	int		m_age;
	double	m_height;
	double	m_weight;

	// 함수 3 : struct 안에 함수를 넣을 수 있음
	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << m_height << " " << m_weight << endl;
	}

};

// 함수 1 : parameter를 모두 입력
void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

// 함수 2 : struct를 parameter로 사용
void print(const Friend& fr)
{
	cout << fr.m_name << " " << fr.m_address << " " << fr.m_age << " " << fr.m_height << " " << fr.m_weight << endl;
}

int main()
{
	// struct로 정리 가능
	//string	name;
	//string	address;
	//int		age;
	//double	height;
	//double	weight;
	Friend jj = { "jihoon", "uptown", 2, 170.0, 70.0 };			// instanciation, instance
		// 아래 방법으로 초기화도 가능
		//jj.name = "jihoon";
		//jj.age = 2;
	
	print(jj.m_name, jj.m_address, jj.m_age, jj.m_height, jj.m_weight);	// 함수 1
	print(jj);													// 함수 2
	jj.print();													// 함수 3

	vector<Friend> my_friends;
	my_friends.resize(2);

	my_friends[0].print();
	my_friends[1].print();

	for (auto& ele : my_friends)
		ele.print();


	//vector<string>	name_vec;
	//vector<string>	addr_vec;
	//vector<int>		age_vec;
	//vector<double>	height_vec;
	//vector<double>	weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

}