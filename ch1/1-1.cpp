#include <iostream>
#include"add_subtract_multiply_divide.h"
using namespace std;

/*
// x�� 1�� �����ϰ� �� �ڷ� �������� ���� ���
// ���� �ٲ�� �ּҴ� �����ϴ�.
int main(void)
{
	int x = 0;
	cout << x << " " << &x << endl;
	{
		//int x = 1;
		x = 1;
		cout << x << " " << &x << endl;
	}
	cout << x << " " << &x << endl;
	return 0;
}
*/

/*
// ���� x�� main�� �Լ����� ������ ���
void doSomething(int x)
{
	x = 123;
	cout << x << endl;
}
int main()
{
	int x = 0;
	cout << x << endl;
	doSomething(x);
	cout << x << endl;
	return 0;
}
*/

/*
int main()
{
	int x = 2; // x is a variable, 2 is a literal
	int y = (x > 0) ? 1 : 2; // x�� 0���� ū��? ���̸� 1, �����̸� 2
	cout << y << endl;
	return 0;
}
*/

/*
// ���� ������ �ؼ� ���� �Լ����� ������ �˷���� �����Ϸ��� �о������
// �������� ��Ȳ�� ������ �߻����� �ʴ´�. ���� main�Լ��� ���� ����
// �Լ����� main �ؿ� �θ�, �Լ��� ���� �����Ϸ��� �𸥴�.
int add(int a, int b); // forward declaration
int multiply(int a, int b);
int subtract(int a, int b);
int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;
	return 0;
}
int add(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}
int multiply(int a, int b) {
	int mul;
	mul = a * b;
	return mul;
}
int subtract(int a, int b) {
	int sub;
	sub = a - b;
	return sub;
}
// �Ʒ��� ���� ������ ����
int main() {
	cout << dist(12, 13) << endl;
	return 0;
}
int dist(int a, int b) {
	return (b - a) ^ 1 / 2;
}
*/

/*
int main()
{
	cout << add(12, 13) << endl;
	return 0;
}
*/