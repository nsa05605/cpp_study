// 스택(Stack)과 힙(Heap)

#include <iostream>

using namespace std;

/*
int g_i = 0;

int second(int x)
{
	return 2 * x;
}

int first(int x)
{
	int y = 3;
	return second(x + y);
}

int main()
{
	int a = 1, b;
	b = first(a);
	cout << b << endl;

	return 0;
}
*/
/*
// stack에 쌓이는 순서(아래부터)

	second()
	int x

	first()
	int x, int y

	main()
	int a, b

	ing g_i

*/

/*
int main()
{
	// ... ...

	// int array[1000000];
	// 이런 경우는 stack에 overflow가 발생하여 error

	return 0;
}
*/

/*
int main()
{
	int* ptr = nullptr;
	ptr = new int[1000000];

	delete[] ptr;
	
	return 0;
}
*/
/*
	위와 같은 경우는
	new int[1000000]가 heap에 할당되어 저장 가능함
	delete를 하지 않으면 heap에 data가 남아있는채로 주소를 잊음(메모리 누수 발생)
*/