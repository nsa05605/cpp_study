// 지역 변수의 범위(scope)와 지속기간(duration)

#include <iostream>
using namespace std;

// 같은 이름의 함수 or 변수를 사용할 때 namespace로 나누어주고, 사용할 때 :: 로 불러와서 사용할 수 있다.
//namespace work1
//{
//	namespace work11
//	{
//
//		int a = 1;
//		void doSomething() {
//			a += 3;
//		}
//	}
//}
//// namespace work1::work11 으로 사용할 수도 있음
//
//
//namespace work2
//{
//	int a = 1;
//	void doSomething() {
//		a += 5;
//	}
//}
//
//
//int main() {
//
//	//int apple = 5;
//	//cout << apple << endl;
//
//	//{
//	//	apple = 1;
//	//	// int apple = 1;
//	//	// 중괄호 안에서 int로 apple을 새로 선언하면 밖에서 선언한 apple과 다른 apple이 생성되는 것이다.
//	//	// int apple2 등으로 다른 이름으로 선언하는 것이 권장됨
//
//	//	cout << apple << endl;
//	//}
//
//	//cout << apple << endl;
//
//	// ::는 영역(범위) 결정 연산자(scope resolution operator)
//	work1::a;
//	work1::doSomething();
//
//	work2::a;
//	work2::doSomething();
//
//
//
//}