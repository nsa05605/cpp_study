// switch-case

#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	//if (color == Colors::BLACK)
	//	cout << "Black" << endl;
	//else if (color == Colors::WHITE)
	//	cout << "White" << endl;
	//else if (color == Colors::RED)
	//	cout << "Red" << endl;
	//else if (color == Colors::GREEN)
	//	cout << "Green" << endl;
	//else if (color == Colors::BLUE)
	//	cout << "Blue" << endl;
	// ���� ����� �� ������ ���� ���ŷο� �� ����

	//switch (color)
	//{
	//	case Colors::BLACK :
	//		cout << "Black";
	//		break;
	//	case Colors::WHITE :
	//		cout << "White";
	//		break;
	//}
	// ���� ������� �ص� �� ������ �������

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black";
		break;
	case 1:
		cout << "white";
		break;

		// ���ؿ� ���� �Է¿� ���ؼ��� default�� ������ �� �ִ�.
	default:
		cout << "Undefined input " << static_cast<int>(color) << endl;
	}
	cout << endl;
	// static_cast�� ���� �� �ִ�.

}

//int main()
//{
//	printColorName(Colors::BLACK);
//
//	//int x;
//	//cin >> x;
//	//{
//	//	switch (x)
//	//	{
//	//	case 0:
//	//		cout << "Zero";
//	//		break;
//	//	case 1:
//	//		cout << "One";
//	//		break;
//	//	case 2:
//	//		cout << "Two";
//	//		break;
//	//	}
//
//	//	cout << endl;
//	//}
//
//}