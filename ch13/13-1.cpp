// 함수 템플릿

#include "Cents.h"
using namespace std;

//int getMax(int x, int y) {
//	return (x > y) ? x : y;
//}
//double getMax(double x, double y) {
//	return (x > y) ? x : y;
//}
//float getMax(float x, float y) {
//	return (x > y) ? x : y;
//}
// 위처럼 하나씩 작업을 하면 매우 번거로움

template<typename T>
T getMax(T x, T y) {
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1, 2) << endl;
	cout << getMax(1.2, 1.5) << endl;
	cout << getMax(1.0f, 3.4f) << endl;

	cout << getMax(Cents(5), Cents(9)) << endl;

	return 0;
}