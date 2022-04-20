// 클래스 템플릿
#include "MyArray.h"

int main()
{
	MyArray my_array(10);

	for (int i = 0; i < my_array.getLength(); i++) {
		my_array[i] = i * 10;
	}

	my_array.print();

	MyArray_T<double> my_array_T(10);

	for (int i = 0; i < my_array_T.getLength(); i++) {
		my_array_T[i] = i * 0.5;
	}

	my_array_T.print();

	return 0;
}