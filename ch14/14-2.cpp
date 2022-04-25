// 예외처리와 스택 되감기

#include <iostream>
using namespace std;

// exception specifier : 이 함수는 exception을 던질 것이라고 알려줌
// 만약 throw()로 비워두면 던지지 않을 것이라는 의미
// void last() throw(...)
void last() {
	cout << "last" << endl;
	cout << "Throw exception" << endl;

	//throw - 1;
	throw 'a';

	cout << "End last" << endl;
}

void third() {
	cout << "third" << endl;
	last();
	cout << "End third" << endl;
}

void second() {
	cout << "second" << endl;

	try
	{
		third();
	}
	catch (double) {
		std::cerr << "second caught double exception" << endl;
	}
	cout << "End second" << endl;
}

void first() {
	cout << "first" << endl;

	try
	{
		second();
	}
	catch(int){
	//catch (char) {
		std::cerr << "first caught int exception" << endl;
	}
	cout << "End first" << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int) {
		std::cerr << "main caught int exception" << endl;

		cout << "End main" << endl;
	}
	// catch-all handlers
	// 모든 type에 대해 처리해줌
	catch (...)
	{
		cerr << "main caught ellipses exception" << endl;
		cout << "End main" << endl;
	}

	return 0;
}