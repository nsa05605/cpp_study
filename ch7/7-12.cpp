// 재귀적 함수 호출

#include <iostream>

using namespace std;

//void countDown(int count)
//{
//	cout << count << endl;
//
//	if (count > 0)
//		countDown(count - 1);
//}

//int sumTo(int sumto)
//{
//	if (sumto <= 0)
//		return 0;
//	else if (sumto <= 1)
//		return 1;
//	else
//		return sumTo(sumto - 1) + sumto;
//}

// 피보나치 수열
// 0 1 1 2 3 5 8 13 ...
// pivo = (pivo - 2) + (pivo - 1)

int pibonacci(int a)
{
	if (a <= 1)
	{
		return a;
	}
	return pibonacci(a - 1) + pibonacci(a - 2);
}


//int main()
//{
//	//countDown(2);
//
//	//cout << sumTo(5) << endl;
//
//	for (int a = 0; a < 15; a++)
//		cout << pibonacci(a) << endl;
//
//	return 0;
//}