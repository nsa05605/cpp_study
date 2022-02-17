// 포인터와 참조의 멤버 선택 연산자

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
	ref.age = 15;						// struct에 ref를 쓸 때는 . 을 사용하고

	Person *ptr = &person;
	ptr->age = 30;						// struct에 ptr을 쓸 때는 -> 을 사용함
	(*ptr).age = 20;

	cout << &person << endl;
	cout << ref.age << endl;
	
}