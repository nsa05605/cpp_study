// 동적 할당 배열

#include <iostream>

using namespace std;

int main()
{
	int fixedArray[] = { 1,2,3,4,5 };

	int* array = new int[]{ 1,2,3,4,5 };

	delete[] array;

	

	return 0;
}