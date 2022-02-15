#include <iostream>
using namespace std;
// namespace : 같은 이름의 함수가 있고, 얘네를 이름을 바꾸지 않고 사용할 경우
// namespace 영역을 줘서 구분할 수 있다.

/*
// 같은 이름의 함수가 있어도 namespace 영역으로 구분할 수 있다.
namespace Myspace1 {
	namespace Innerspace {
		int my_function()
		{
			return 10;
		}
	}
	int doSomething(int a, int b)
	{
		return a * b;
	}
}
namespace Myspace2 {
	int doSomething(int a, int b)
	{
		return a + b;
	}
}
int main()
{
	using namespace Myspace1;
	cout << doSomething(3, 5) << endl;
	return 0;
}
// namespace를 2개 이상 사용하는 경우
// 아래와 같이 사용할 수 있다.
int main()
{
	using namespace Myspace1;
	cout << Innerspace::my_function() << endl;
	using namespace Myspace1::Innerspace;
	cout << my_function() << endl;
	return 0;
}
*/

/*
// 전처리기
// #define을 해주면 뒤에 나오는 문자를 실행함
// #define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE
int main()
{
	// cout << MAX(3, 2) << endl;
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif
#ifndef LIKE_APPLE
	cout << "ORange" << endl;
#endif
	return 0;
}
*/