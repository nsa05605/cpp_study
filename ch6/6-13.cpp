// 포인터와 const

#include <iostream>

using namespace std;

int main()
{
	//const int value1 = 5;
	//const int* ptr1 = &value1;
	//// *ptr = 6;					// const이기 때문에 error

	//cout << *ptr1 << endl;

	//int value2 = 5;
	//const int* ptr2 = &value2;
	//value2 = 6;					// 이건 가능

	//cout << *ptr2 << endl;



	// 변수가 2개인 경우

	//int value1 = 5;
	//const int* ptr1 = &value1;

	//int value2 = 6;
	//ptr1 = &value2;				// 이것도 가능
	//								// const *ptr은 ptr의 주소를 바꾸지 않겠다가 아니라 주소에 할당된 변수를 바꾸지 않겠다는 의미


	//int value1 = 5;
	//int* const ptr = &value1;

	//*ptr = 10;
	//cout << *ptr << endl;

	//int value2 = 8;
	//// ptr = &value2;				// 이건 error


	//int value1 = 5;
	//int value2 = 10;
	//const int* const ptr = &value1;

	//*ptr = value2;
	//ptr = &value2;			// 둘 모두 error

}