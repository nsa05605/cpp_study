// 객체 잘림(object slicing)과 reference_Wrapper

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
	//Base b2 = d;	// 실수로 &를 붙이지 않았다고 가정

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

	//// push_back을 하는 과정에서 derived가 base로 바뀜
	//for (auto& ele : my_vec) {
	//	ele.print();
	//}


	//// 방지하려면 Vector에 pointer로 넣고 push_back에 주소값을 넣어주는 방법
	//std::vector<Base*> my_vec;
	//my_vec.push_back(&b);
	//my_vec.push_back(&d);

	//for (auto& ele : my_vec) {
	//	ele->print();
	//}


	std::vector<std::reference_wrapper<Base>> my_vec;
	// std::vector<&Base> my_vec; 처럼 작동하도록 해줌
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec) {
		ele.get().print();		// get은 reference를 가져오는 함수
	}

	return 0;
}