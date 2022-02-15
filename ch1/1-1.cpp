#include <iostream>
#include"add_subtract_multiply_divide.h"
using namespace std;

/*
// x를 1번 선언하고 그 뒤로 선언하지 않은 경우
// 값만 바뀌고 주소는 동일하다.
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
// 같은 x를 main과 함수에서 선언할 경우
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
	int y = (x > 0) ? 1 : 2; // x가 0보다 큰가? 참이면 1, 거짓이면 2
	cout << y << endl;
	return 0;
}
*/

/*
// 전방 선언을 해서 무슨 함수들을 쓰는지 알려줘야 컴파일러가 읽어내려가는
// 순차적인 상황에 문제가 발생하지 않는다. 만약 main함수를 먼저 쓰고
// 함수들을 main 밑에 두면, 함수가 뭔지 컴파일러가 모른다.
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
// 아래의 경우는 오류의 예시
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