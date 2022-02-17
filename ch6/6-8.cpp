// 포인터와 정적배열

#include <iostream>

using namespace std;

// void printArray(int *array)
void printArray(int array[])
{
	cout << sizeof(array) << endl;	// 20이 나올 것을 기대했지만 8이 출력
	cout << *array << endl;

	*array = 100;
}

//int main()
//{
//	int array[5] = { 9, 7, 5, 3, 1 };
//
//	//cout << (int)array << endl;				// array를 출력하면 주소 값이 출력
//	//cout << (int)&(array[0]) << endl;			// array와 array[0]의 주소는 같고
//	//cout << (int) & (array[1]) << endl;		// 그 이후는 4씩 증가
//	//cout << *array << endl;					// *array를 출력하면 array[0]가 출력
//
//	////char name[] = "jackjack";
//	////cout << *name << endl;
//
//	//int* ptr = array;		// 여기서의 *은 int에 ptr이 pointer라고 알려주는 *
//	//cout << (int)ptr << endl;
//	//cout << *ptr << endl;	// 여기서의 *은 de-reference 의미
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