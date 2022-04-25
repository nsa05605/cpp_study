// 예외 클래스와 상속

#include <iostream>
using namespace std;

class Exception
{
public:
	void report() {
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void report() {
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int& operator [] (const int& index) {
		//if (index < 0 || index >= 5) throw - 1;
		//if (index < 0 || index >= 5) throw Exception();		// Exception class를 만들어서 던지는 것
		if (index < 0 || index >= 5) throw ArrayException();	// ArrayException class를 만들어서 던지는 것
		return m_data[index];
	}
};

void doSomething() {
	MyArray my_array;

	try {
		my_array[100];
	}
	catch (const int& x) {
		cerr << "Exception" << x << endl;
	}
	//catch (ArrayException& e) {	// Exception이 먼저 나오면 ArrayException(상속받는 class)가 잘림
	//	cout << "doSomething()" << endl;
	//	e.report();
	//	throw e;	// 다시 throw
	//}
	catch (Exception& e) {
		cout << "doSomething()" << endl;
		e.report();
		throw;
		// doSomething 함수에서는 Exception으로 처리가 되는데
		// throw로 던지면 main 함수에서는 다시 ArrayException으로 정상적으로 처리 됨
	}
}

int main()
{
	try {
		doSomething();
	}
	catch (ArrayException& e) {
		cout << "main()" << endl;
		e.report();
	}


	return 0;
}