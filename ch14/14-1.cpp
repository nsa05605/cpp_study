// ����ó���� �⺻

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int findFirstChar(const char* string, char ch) {
	for (size_t index = 0; index < strlen(string); index++) {
		if (string[index] == ch) {
			return index;
		}
	}
	return -1;		// no match
}

double divide(int x, int y, bool& success) {
	if (y == 0) {
		success = false;
		return 0.0;
	}
	success = true;
	return static_cast<double>(x) / y;
}

int main()
{
	/*
	bool success;
	double result = divide(5, 3, success);

	if (!success) {
		cout << "An error occurred" << endl;
	}
	else
		cout << "Result is " << result << endl;

	ifstream input_file("temp.txt");
	if (!input_file) {
		cerr << "Cannot open file" << endl;
	}
	*/


	// ����ó�� �Լ�
	// try, catch, throw
	double x;
	cin >> x;

	try {
		if (x < 0.0) throw std::string("Negative input");

		cout << std::sqrt(x) << endl;	// �������� ���(x>0) �۵�
	}
	catch (std::string error_message) {
		// do something to respond
		cout << error_message << endl;
	}

	
	try {
		// something happend
		// throw - 1;		// catch integer
		// throw - 1.0;	// error
		throw "My error message";
	}
	//catch (int x) {
	//	cout << "Catch integer " << x << endl;
	//}
	//catch (double x) {
	//	cout << "Catch double " << x << endl;
	//}
	catch (const char* error_message) {
		cout << "Char *" << error_message << endl;
	}
	catch (std::string error_message) {
		cout << error_message << endl;
	}


	return 0;
}