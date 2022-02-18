// 값에 의한 인수 전달
//Passing Arguments by Value(Call by Value)

#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

//int main()
//{
//	doSomething(5);
//
//	int x = 6;
//
//	cout << "in main " << x << " " << &x << endl;
//
//	doSomething(x);
//	doSomething(x + 1);
//	
//	// 확인해보면 doSomething 함수에서 parameter의 값의 변화는 상관 없이 모든 주소가 동일함
//
//
//	return 0;
//}