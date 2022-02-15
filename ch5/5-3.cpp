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
	// 위의 방법은 쓸 내용이 많아 번거로울 수 있음

	//switch (color)
	//{
	//	case Colors::BLACK :
	//		cout << "Black";
	//		break;
	//	case Colors::WHITE :
	//		cout << "White";
	//		break;
	//}
	// 위의 방법으로 해도 쓸 내용이 길어진다

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black";
		break;
	case 1:
		cout << "white";
		break;

		// 기준에 없는 입력에 대해서는 default로 제어할 수 있다.
	default:
		cout << "Undefined input " << static_cast<int>(color) << endl;
	}
	cout << endl;
	// static_cast로 줄일 수 있다.

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