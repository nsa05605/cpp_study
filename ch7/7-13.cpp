// 방어적 프로그래밍의 개념
// Defensive Programming

#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	// syntax error	: 문법적 오류
//	// int x
//
//	// semantic errors
//	//int x;
//	//cin >> x;
//
//	//if (x >= 5)	// x = 5 인 경우에 cout 결과와 논리적으로 오류
//	//	cout << "x is greater than 5" << endl;
//
//	// violated assumption
//	// 사용자가 내가 작성한 것과 다른 방식으로 사용하는 경우
//	string hello = "Hello, my name is Jihoon";
//
//	// 해결 방법 1(권장 x)
//	cout << "Input from 0 to " << hello.size() - 1 << endl;
//
//	// 해결 방법 2
//	while (true)
//	{
//		int ix;
//		cin >> ix;
//		if (ix >= 0 && ix <= hello.size() - 1)
//		{
//			cout << hello[ix] << endl;				// ix에 글자수보다 큰 수를 넣으면 error 발생
//			break;
//		}
//		else
//			cout << "Please try again" << endl;
//	}
//
//
//	return 0;
//}