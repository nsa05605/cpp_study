// ���� Ŭ������ ���

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
		//if (index < 0 || index >= 5) throw Exception();		// Exception class�� ���� ������ ��
		if (index < 0 || index >= 5) throw ArrayException();	// ArrayException class�� ���� ������ ��
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
	//catch (ArrayException& e) {	// Exception�� ���� ������ ArrayException(��ӹ޴� class)�� �߸�
	//	cout << "doSomething()" << endl;
	//	e.report();
	//	throw e;	// �ٽ� throw
	//}
	catch (Exception& e) {
		cout << "doSomething()" << endl;
		e.report();
		throw;
		// doSomething �Լ������� Exception���� ó���� �Ǵµ�
		// throw�� ������ main �Լ������� �ٽ� ArrayException���� ���������� ó�� ��
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