#include <iostream>
#define PRICE_PER_ITEM 30 // PRICE_PER_ITEM이라는 변수를 30으로 정의
#include "MY_CONSTANTS.h"
using namespace std;

/*
void printNumber(int my_number) {
	cout << my_number << endl;
}

int main() {
	printNumber(123);

	const double gravity = 9.8; // 변경할 수 없는 변수로 저장

	// gravity = 1.2; // 이렇게 작성하면 오류가 발생

	return 0;
}
*/

/*
int main() {

	constexpr int my_const(123);

	int number;
	cin >> number;

	const int special_number(number);

	cout << number << " " << special_number << endl;

	return 0;
}
*/

/*
int main() {

	const int price_per_item = 30;

	int num_item = 123;

	// int price = num_item * 30; // 코드에 숫자를 남겨놓으면 좋지 않음
	// int price = num_item * PRICE_PER_ITEM; // 위에서 정의한 PRICE_PER_ITEM을 사용
	int price = num_item * price_per_item; // 위에서 define으로 매크로를 사용하는 것보다 const로 함수 내에서 지정하는 것이 더 좋음

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi; // MY_CONSTANTS.h에 넣은 pi 변수를 사용함


	return 0;

}
*/