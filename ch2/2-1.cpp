// 변수와 자료형

#include <iostream>
#include <bitset>
using namespace std;
/*
int main() {
	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
}
*/

/*
int main()
{
	bool bValue = false;
	char chValue = 65;
	float fValue = 3.141592;
	double dValue = 3.141592;

	cout << bValue << endl;
	cout << chValue << endl;// char 연산자에 숫자를 넣었지만 A가 나오는 것은 ascii로 읽기 때문
	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue1 = 3.141592;
	auto aValue2 = 3.141592f; // f를 붙여야 float, 아니면 double

	cout << aValue1 << endl; // double
	cout << aValue2 << endl; // float

	cout << sizeof(aValue1) << endl;
	cout << sizeof aValue2 << endl;
	// sizeof 함수로 자료형의 크기를 구할 수 있다.
	// sizeof 표현식, sizeof(자료형), sizeof(표현식)으로 작성 가능

	return 0;
}
*/

// initialization 방법
// int a = 123; // copy initialization
// int a(123); // direct initialization
// int a{ 123 }; // uniform initialization