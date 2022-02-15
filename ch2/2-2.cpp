#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

/*
int main()
{
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;
	cout << sizeof(s) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(l) << endl;
	cout << sizeof(ll) << endl;
}
*/

/*
// short���� ������ overflow, underflow
int main()
{
	short s = 1;
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	// ���� ������ �о �� �ִ� ���
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;
	s = 32767;
	s += 1; // s = s + 1 = 32768
	cout << s << endl; // 32768�� ��µǾ�� ������ overflow�� ���� -32768�� ��µ�
	s = std::numeric_limits<short>::min(); // s = -32768
	cout << "min() " << s << endl;
	s -= 1; // s = -32769
	cout << s << endl; // -32769�� �ƴ� 32767�� ��µ�
	return 0;
}
*/

/*
// unsigned���� ������ overflow, underflow
int main()
{
	unsigned u = 1;
	cout << sizeof(unsigned) << endl;
	cout << std::pow(2, sizeof(unsigned) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<unsigned>::max() << endl;
	cout << std::numeric_limits<unsigned>::min() << endl;
	u = std::numeric_limits<unsigned>::max();
	cout << "max()? " << u << endl;
	u += 1;
	cout << "max+1? " << u << endl;
	u = std::numeric_limits<unsigned>::min();
	cout << "min()? " << u << endl;
	u -= 1;
	cout << "min-1? " << u << endl;
	return 0;
}
*/