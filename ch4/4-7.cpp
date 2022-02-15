// 열거형

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

//// 각 무기의 데미지를 나열하기 위한 함수를 만드는데
//// 개발자가 이 모든 무기의 변수와 리턴을 외우기 어려움
//// 때문에 열거형을 사용함
//int computeDamage(int weapon_id)
//{
//	if (weapon_id == 0) // sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//}

enum Color // user-defined data types(사용자 정의 자료형)
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE = -1, // 숫자를 할당할 수 있음
	COLOR_GREEN,
	COLOR_SKYBLUE,
	// BLUE // 아래의 Feeling의 BLUE와 같아서 오류 발생
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE
};

//int main()
//{
//	//Color paint = COLOR_BLACK;
//	//Color house(COLOR_BLUE);
//	//Color apple{COLOR_RED};
//
//	//Color my_color1 = COLOR_BLACK;
//	//Color my_color2 = COLOR_BLUE;
//	//Color my_color3 = COLOR_GREEN;
//
//
//	//cout << my_color1 << " " << COLOR_BLACK << endl; // integer형으로 출력된다
//	//cout << my_color2 << " " << COLOR_BLUE << endl;
//	//cout << my_color3 << " " << COLOR_GREEN << endl;
//
//	Color my_color = static_cast<Color>(3);
//
//	// cin >> my_color; // 는 오류 발생
//	//int in_number;
//	//cin >> in_number;
//
//	//if (in_number == COLOR_BLACK)
//	//{
//	//	my_color = COLOR_BLACK;
//	//	cout << "my_color is " << COLOR_BLACK << endl;
//	//}
//
//	// string으로 할 수 있지만 권장하지 않음
//	string str_input;
//	getline(cin, str_input);
//
//	if (str_input == "COLOR_BLACK")
//		my_color = static_cast<Color>(0);
//
//}