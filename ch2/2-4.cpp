// 부동소수점

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
/*
int main() {
	// float f = 3.141592f;
	// double d = 3.141592;
	// long double ld = 3.141592;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	float f(123456789.0f); // 10 significant digits(유효숫자가 10개)
	cout << std::setprecision(9); // 앞으로 출력을 어떻게 바꿀거냐
	cout << f << endl;

	double d(0.1);

	cout << d << endl;
	cout << std::setprecision(17) << endl;
	cout << d << endl;

	return 0;
}
*/

/*
bool isEqual(int a, int b) {
	bool result = (a == b); // a == b이면 true, 다르면 false

	return result;
}

int main() {
	cout << std::boolalpha; // 출력의 형태를 지정_true, false
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	return 0;
}
*/

/*
bool isEven(int a) {
	bool result = (a % 2 == 0);

	return result;
}

int main() {
	int a;

	cin >> a;
	cout << std::boolalpha;
	cout << "is this even number? " << isEven(a) << endl;

	return 0;
}
*/