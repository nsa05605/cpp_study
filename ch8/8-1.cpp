// ��ü���� ���α׷��ְ� Ŭ����
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
//	// �Լ� 3 : struct �ȿ� �Լ��� ���� �� ����
//	void print()
//	{
//		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
//	}
//
//};

// ����ü �ȿ� �Լ��� �ִ� ��쿡�� ���� struct ��� class�� ���
class Friend
{
public:	// access specifier (public, private, protected)
	string	m_name;
	string	m_address;
	int		m_age;
	double	m_height;
	double	m_weight;

	// �Լ� 3 : struct �ȿ� �Լ��� ���� �� ����
	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << m_height << " " << m_weight << endl;
	}

};

// �Լ� 1 : parameter�� ��� �Է�
void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

// �Լ� 2 : struct�� parameter�� ���
void print(const Friend& fr)
{
	cout << fr.m_name << " " << fr.m_address << " " << fr.m_age << " " << fr.m_height << " " << fr.m_weight << endl;
}

int main()
{
	// struct�� ���� ����
	//string	name;
	//string	address;
	//int		age;
	//double	height;
	//double	weight;
	Friend jj = { "jihoon", "uptown", 2, 170.0, 70.0 };			// instanciation, instance
		// �Ʒ� ������� �ʱ�ȭ�� ����
		//jj.name = "jihoon";
		//jj.age = 2;
	
	print(jj.m_name, jj.m_address, jj.m_age, jj.m_height, jj.m_weight);	// �Լ� 1
	print(jj);													// �Լ� 2
	jj.print();													// �Լ� 3

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