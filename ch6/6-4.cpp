// �迭�� ���� ����

#include <iostream>

using namespace std;

void printArray(const int array[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

// �������� ����
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

// �������� ����
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
//	// ���� ����
//	// index 0 ( ���� ����)���� �񱳸� �����ؼ� ���� ���� ���� ã�� �� ���� �ٲ���
//	// 1���� ���� 3�� 5���� �����Ƿ� ���, 2���� �۾Ƽ� ��ü�Ǵµ� �� ���� 1�� ������ �� ��ü 
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