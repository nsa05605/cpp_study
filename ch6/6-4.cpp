// 배열과 선택 정렬

#include <iostream>

using namespace std;

void printArray(const int array[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

// 오름차순 정렬
void changeArray_asc(int array[], int length)
{
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// swap two values in the array
		// std::swap(array[smallestIndex], array[startIndex]);

		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}

		printArray(array, length);
	}
}

// 내림차순 정렬
void changeArray_desc(int array[], int length)
{
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int biggestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[biggestIndex] < array[currentIndex])
			{
				biggestIndex = currentIndex;
			}
		}

		{
			int temp = array[biggestIndex];
			array[biggestIndex] = array[startIndex];
			array[startIndex] = temp;
		}

		printArray(array, length);
	}
}


//int main()
//{
//	// 선택 정렬
//	// index 0 ( 가장 좌측)부터 비교를 시작해서 가장 작은 값을 찾을 때 값을 바꿔줌
//	// 1열을 보면 3은 5보다 작으므로 통과, 2보다 작아서 교체되는데 그 다음 1을 만나고 또 교체 
//	/*			value	index
//	3 5 2 1 4	  1		  3
//	1 5 2 3 4	  2		  2
//	1 2 5 3 4	  3		  3
//	1 2 3 5 4	  4		  4
//	1 2 3 4 5
//	*/
//
//	const int length = 5;
//
//	int array[length] = { 3, 5, 2, 1, 4 };
//	
//	printArray(array, length);
//
//	// swap
//	//int temp = array[0];
//	//array[0] = array[1];
//	//array[1] = temp;
//
//	changeArray_asc(array, length);
//	
//	changeArray_desc(array, length);
//
//}