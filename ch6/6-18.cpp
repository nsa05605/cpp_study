// void ������

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

	// cout << ptr + 1 << endl;						// void ptr�� error
	cout << *static_cast<float*>(ptr) + 1 << endl;	// static_cast�� ���� �����ְ� ����ؾ� ��

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;
										// void ptr�� ����� ���� ���� ������
										// ���� ���� ��Ȳ���� �����

}