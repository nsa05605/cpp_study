#include <iostream>
using namespace std;
// namespace : ���� �̸��� �Լ��� �ְ�, ��׸� �̸��� �ٲ��� �ʰ� ����� ���
// namespace ������ �༭ ������ �� �ִ�.

/*
// ���� �̸��� �Լ��� �־ namespace �������� ������ �� �ִ�.
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
// namespace�� 2�� �̻� ����ϴ� ���
// �Ʒ��� ���� ����� �� �ִ�.
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
// ��ó����
// #define�� ���ָ� �ڿ� ������ ���ڸ� ������
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