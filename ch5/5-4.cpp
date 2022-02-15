// goto
// 많이 쓰지 않음

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;

tryAgain: //label

	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

}