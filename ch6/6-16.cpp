// �����Ϳ� ������ ��� ���� ������

#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};


int main()
{
	Person person;

	person.age = 5;
	person.weight = 30.0;

	Person &ref = person;
	ref.age = 15;						// struct�� ref�� �� ���� . �� ����ϰ�

	Person *ptr = &person;
	ptr->age = 30;						// struct�� ptr�� �� ���� -> �� �����
	(*ptr).age = 20;

	cout << &person << endl;
	cout << ref.age << endl;
	
}