// ����� ���α׷����� ����
// Defensive Programming

#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	// syntax error	: ������ ����
//	// int x
//
//	// semantic errors
//	//int x;
//	//cin >> x;
//
//	//if (x >= 5)	// x = 5 �� ��쿡 cout ����� �������� ����
//	//	cout << "x is greater than 5" << endl;
//
//	// violated assumption
//	// ����ڰ� ���� �ۼ��� �Ͱ� �ٸ� ������� ����ϴ� ���
//	string hello = "Hello, my name is Jihoon";
//
//	// �ذ� ��� 1(���� x)
//	cout << "Input from 0 to " << hello.size() - 1 << endl;
//
//	// �ذ� ��� 2
//	while (true)
//	{
//		int ix;
//		cin >> ix;
//		if (ix >= 0 && ix <= hello.size() - 1)
//		{
//			cout << hello[ix] << endl;				// ix�� ���ڼ����� ū ���� ������ error �߻�
//			break;
//		}
//		else
//			cout << "Please try again" << endl;
//	}
//
//
//	return 0;
//}