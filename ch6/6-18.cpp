// void 포인터

#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR,
};

int main()
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	// ptr = &c;

	// cout << ptr + 1 << endl;						// void ptr은 error
	cout << *static_cast<float*>(ptr) + 1 << endl;	// static_cast로 형을 정해주고 출력해야 함

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;
										// void ptr은 사용할 일이 많지 않은데
										// 위와 같은 상황에서 사용함

}