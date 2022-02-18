// 인라인 함수(Inline Functions)

#include <iostream>

using namespace std;

// inline function을 사용하면 컴파일러가 함수로 인식하지 않고 빠르게 진행
inline int min(int x, int y)
{
	return (x > y) ? y : x;
}

//int main()
//{
//	cout << min(5, 6) << endl;
//	cout << min(3, 2) << endl;
//
//	cout << (5 > 6 ? 6 :5) << endl;
//	cout << (3 > 2 ? 2 :3) << endl;
//}