// �ܾ��ϱ�(assert)

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

// my_array�� ũ��� ix���� �۾ƾ� �ϹǷ� assert�� ũ���� ������ �������� �� �� �ִ�.
void printValue(const array<int, 5>& my_array, const int& ix)
{
	// ix�� 0���ٴ� ũ��, my_array�� ������ٴ� �۾ƾ� �Ѵ�.
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1,);

	cout << my_array[ix] << endl;
}

//int main()
//{
//	//int number = 5;
//
//	//// number should be 5
//	//assert(number == 5, "too big");
//
//	//array<int, 5> my_array = { 1,2,3,4,5 };
//
//	//// printValue(my_array, 100);	// ix�� ������ ����Ƿ� error
//	//printValue(my_array, 4);
//
//	//return 0;
//}