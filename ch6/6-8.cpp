// �����Ϳ� �����迭

#include <iostream>

using namespace std;

// void printArray(int *array)
void printArray(int array[])
{
	cout << sizeof(array) << endl;	// 20�� ���� ���� ��������� 8�� ���
	cout << *array << endl;

	*array = 100;
}

//int main()
//{
//	int array[5] = { 9, 7, 5, 3, 1 };
//
//	//cout << (int)array << endl;				// array�� ����ϸ� �ּ� ���� ���
//	//cout << (int)&(array[0]) << endl;			// array�� array[0]�� �ּҴ� ����
//	//cout << (int) & (array[1]) << endl;		// �� ���Ĵ� 4�� ����
//	//cout << *array << endl;					// *array�� ����ϸ� array[0]�� ���
//
//	////char name[] = "jackjack";
//	////cout << *name << endl;
//
//	//int* ptr = array;		// ���⼭�� *�� int�� ptr�� pointer��� �˷��ִ� *
//	//cout << (int)ptr << endl;
//	//cout << *ptr << endl;	// ���⼭�� *�� de-reference �ǹ�
//
//	cout << sizeof(array) << endl;	// 20
//
//	int *ptr = array;
//
//	cout << sizeof(ptr) << endl;	// 8
//
//	printArray(array);
//
//	cout << array[0] << " " << *array << endl;
//}