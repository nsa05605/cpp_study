// ���� ����(Reference Variable)

#include <iostream>

using namespace std;

// void doSomething(int n)���� �ϸ� n���� main���� �ٽ� 5�� ���ư��µ�
// reference &n���� ������ n���� �ٲ�
//void doSomething(int &n)				// const int &n ���� ������Ű�� n���� �ٲ� �� ����
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

// �Լ������� const int &ref �� �Է��� ������ �Ʒ��� ������
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
//	//int& ref = value;					// ref�� value�� ���� �ּҸ� �����Ѵٴ� �ǹ�
//
//	//ref = 10;
//
//	//cout << &value << endl;
//	//cout << &ref << endl;
//	//cout << ptr << endl;				// var, ref, ptr�� ���� �ּҸ� ���������
//	//cout << &ptr << endl;				// ptr ��ü�� �ּҴ� �ٸ� ��
//
//
//	//int x = 5;
//	//int& ref1 = x;
//
//	//const int y = 8;
//	//const int& ref2 = y;						// const�� ������ ref�� ������ �Ұ���
//	//										// const ... ref�� ���־����
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
//	//cout << &ref_x << endl;				// const int &ref �� ������ �ϸ� literal�� �ʱ�ȭ�� ����
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