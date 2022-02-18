// std::vector를 stack처럼 사용하기

#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& element : stack)
		cout << element << " ";
	cout << endl;
}


int main()
{
	/*
	// int *v_ptr = new int[3]{ 1,2,3 };
	std::vector<int> v{ 1,2,3 };

	// vector에는 size, capacity(용량)가 있다.


	for (auto& element : v)
		cout << element << " ";
	cout << endl;
	
	cout << v.size() << " " << v.capacity() << endl;	// 3 3

	// v.resize(10);
	// cout << v.size() << " " << v.capacity() << endl;	// 10 10

	// v.resize(2);
	// cout << v.size() << " " << v.capacity() << endl;	// 2 10
	
	//cout << v[2] << endl;
	//cout << v.at(2) << endl;
								// size보다 크기 때문에 error

	v.reserve(1024);			// capacity를 1024로 할당
								// 속도적인 이득
	cout << v.size() << " " << v.capacity() << endl;
	*/

	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);		// 3

	stack.push_back(5);
	printStack(stack);		// 3 5

	stack.push_back(7);
	printStack(stack);		// 3 5 7

	stack.pop_back();
	printStack(stack);		// 3 5

	stack.pop_back();
	printStack(stack);		// 3

	stack.pop_back();
	printStack(stack);		// 

	return 0;

}