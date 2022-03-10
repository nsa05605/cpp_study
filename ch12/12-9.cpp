// ��ü �߸�(object slicing)�� reference_Wrapper

#include <iostream>
#include <vector>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print() {
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override {
		cout << "I'm Derived" << endl;
	}
};

void doSomething(Base &b) {
	b.print();
}

int main()
{
	//Derived d;
	//Base &b1 = d;
	//Base b2 = d;	// �Ǽ��� &�� ������ �ʾҴٰ� ����

	//b1.print();
	//b2.print();
	//
	//doSomething(d);
	//doSomething(b1);
	//doSomething(b2);
	


	Base b;
	Derived d;

	//std::vector<Base> my_vec;
	//my_vec.push_back(b);
	//my_vec.push_back(d);

	//// push_back�� �ϴ� �������� derived�� base�� �ٲ�
	//for (auto& ele : my_vec) {
	//	ele.print();
	//}


	//// �����Ϸ��� Vector�� pointer�� �ְ� push_back�� �ּҰ��� �־��ִ� ���
	//std::vector<Base*> my_vec;
	//my_vec.push_back(&b);
	//my_vec.push_back(&d);

	//for (auto& ele : my_vec) {
	//	ele->print();
	//}


	std::vector<std::reference_wrapper<Base>> my_vec;
	// std::vector<&Base> my_vec; ó�� �۵��ϵ��� ����
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec) {
		ele.get().print();		// get�� reference�� �������� �Լ�
	}

	return 0;
}