// ����(Stack)�� ��(Heap)

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
// stack�� ���̴� ����(�Ʒ�����)

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
	// �̷� ���� stack�� overflow�� �߻��Ͽ� error

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
	���� ���� ����
	new int[1000000]�� heap�� �Ҵ�Ǿ� ���� ������
	delete�� ���� ������ heap�� data�� �����ִ�ä�� �ּҸ� ����(�޸� ���� �߻�)
*/