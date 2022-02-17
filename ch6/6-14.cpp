// 참조 변수(Reference Variable)

#include <iostream>

using namespace std;

// void doSomething(int n)으로 하면 n값이 main에서 다시 5로 돌아가는데
// reference &n으로 받으면 n값이 바뀜
//void doSomething(int &n)				// const int &n 으로 고정시키면 n값을 바꿀 수 없음
//{
//	n = 10;
//	cout << "In doSomething " << n << endl;
//	cout << &n << endl;
//
//}
//
//void printElements(int (& arr)[5])
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//struct Something
//{
//	int v1;
//	float v2;
//};
//
//struct Other
//{
//	Something st;
//};

// 함수에서도 const int &ref 로 입력을 받으면 아래와 동일함
void doSomething(const int &x)
{
	cout << x << endl;
}

//int main()
//{
//	//int value = 5;
//
//	//int *ptr = &value;
//
//	//int& ref = value;					// ref와 value가 같은 주소를 공유한다는 의미
//
//	//ref = 10;
//
//	//cout << &value << endl;
//	//cout << &ref << endl;
//	//cout << ptr << endl;				// var, ref, ptr은 같은 주소를 출력하지만
//	//cout << &ptr << endl;				// ptr 자체의 주소는 다른 값
//
//
//	//int x = 5;
//	//int& ref1 = x;
//
//	//const int y = 8;
//	//const int& ref2 = y;						// const로 받으면 ref로 수정이 불가능
//	//										// const ... ref로 해주어야함
//
//	//cout << ref1 << endl;
//	//cout << ref2 << endl;
//
//	//int n = 5;
//
//	//cout << n << endl;
//	//cout << &n << endl;
//
//	//doSomething(n);
//
//	//cout << n << endl;
//
//	//const int length = 5;
//	//int arr[length] = { 1,2,3,4,5 };
//
//	//printElements(arr);
//
//
//
//	//Other ot;
//
//	//int& v1 = ot.st.v1;
//	//v1 = 1;
//
//
//
//	//const int &ref_x = 3 + 4;
//
//	//cout << ref_x << endl;
//	//cout << &ref_x << endl;				// const int &ref 로 선언을 하면 literal로 초기화가 가능
//
//
//
//	int a = 1;
//	
//	doSomething(a);
//	doSomething(1);
//	doSomething(a + 3);
//	doSomething(3 * 4);
//
//}