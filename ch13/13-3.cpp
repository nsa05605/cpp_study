// �ڷ����� �ƴ� ���ø� �Ű�����(Non-type Parameters)

#include "MyArray.h"
#include <iostream>
using namespace std;

int main()
{
	// std::vector<double> my_array;	my_array.resize(100);
	// MyArray_T<double> my_array(100);
	// ���� ������� �ϴ� �Ͱ� ����

	MyArray_T_int<double, 100> my_array;

	for (int i = 0; i < 100; i++) {
		my_array[i] = i * 2.5;
	}

	my_array.print();

	return 0;
}