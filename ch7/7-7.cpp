// 함수 오버로딩(Function Overloading)

#include <iostream>
#include <string>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

void print(unsigned int value) {}
void print(float value) {}

//int main()
//{
//	add(1, 2);
//	add(3.0, 4.0);
//
//		print((unsigned int)'a');
//		print(3u);						// unsigned int
//		print(3.14159f);
//
//}