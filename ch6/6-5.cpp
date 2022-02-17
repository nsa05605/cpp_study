// 정적 다차원 배열

#include <iostream>

using namespace std;

//int main()
//{
//	const int num_rows = 3;
//	const int num_colums = 5;
//
//	//for (int row = 0; row < num_rows; ++row)
//	//{
//	//	for (int col = 0; col < num_colums; ++col)
//	//	{
//	//		cout << '[' << row << ']' << '[' << col << ']' << '\t';
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	//// row-major
//	//int array[num_rows][num_colums] // num_rows는 생략할 수 있음
//	//	// array[0][0] = 1;
//	//	// array[0][1] = 2; // 각 요소마다 값을 넣어주는 방법
//	//{
//	//	{1, 2, },		// row 0
//	//	{6, 7, 8, 9, 10},		// row 1
//	//	{11, 12, 13, 14, 15}	// row 2
//	//};							// 한 번에 초기화하는 방법
//
//	//// 초기화한 행렬 출력
//	//for (int row = 0; row < num_rows; ++row)
//	//{
//	//	for (int col = 0; col < num_colums; ++col)
//	//	{
//	//		cout << array[row][col] << '\t';
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	//// 메모리 주소를 출력
//	//for (int row = 0; row < num_rows; ++row)
//	//{
//	//	for (int col = 0; col < num_colums; ++col)
//	//	{
//	//		cout << (int)&array[row][col] << '\t';
//	//	}
//	//	cout << endl;
//	//}
//
//
//}