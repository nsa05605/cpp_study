#include <iostream>
#define PRICE_PER_ITEM 30 // PRICE_PER_ITEM�̶�� ������ 30���� ����
#include "MY_CONSTANTS.h"
using namespace std;

/*
void printNumber(int my_number) {
	cout << my_number << endl;
}

int main() {
	printNumber(123);

	const double gravity = 9.8; // ������ �� ���� ������ ����

	// gravity = 1.2; // �̷��� �ۼ��ϸ� ������ �߻�

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

	// int price = num_item * 30; // �ڵ忡 ���ڸ� ���ܳ����� ���� ����
	// int price = num_item * PRICE_PER_ITEM; // ������ ������ PRICE_PER_ITEM�� ���
	int price = num_item * price_per_item; // ������ define���� ��ũ�θ� ����ϴ� �ͺ��� const�� �Լ� ������ �����ϴ� ���� �� ����

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi; // MY_CONSTANTS.h�� ���� pi ������ �����


	return 0;

}
*/