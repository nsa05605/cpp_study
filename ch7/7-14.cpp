// 단언하기(assert)

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

// my_array의 크기는 ix보다 작아야 하므로 assert로 크기의 범위를 고정시켜 줄 수 있다.
void printValue(const array<int, 5>& my_array, const int& ix)
{
	// ix는 0보다는 크고, my_array의 사이즈보다는 작아야 한다.
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
//	//// printValue(my_array, 100);	// ix가 범위를 벗어나므로 error
//	//printValue(my_array, 4);
//
//	//return 0;
//}