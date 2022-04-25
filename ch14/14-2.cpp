// ����ó���� ���� �ǰ���

#include <iostream>
using namespace std;

// exception specifier : �� �Լ��� exception�� ���� ���̶�� �˷���
// ���� throw()�� ����θ� ������ ���� ���̶�� �ǹ�
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
	// ��� type�� ���� ó������
	catch (...)
	{
		cerr << "main caught ellipses exception" << endl;
		cout << "End main" << endl;
	}

	return 0;
}