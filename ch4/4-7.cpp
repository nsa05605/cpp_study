// ������

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

//// �� ������ �������� �����ϱ� ���� �Լ��� ����µ�
//// �����ڰ� �� ��� ������ ������ ������ �ܿ�� �����
//// ������ �������� �����
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

enum Color // user-defined data types(����� ���� �ڷ���)
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE = -1, // ���ڸ� �Ҵ��� �� ����
	COLOR_GREEN,
	COLOR_SKYBLUE,
	// BLUE // �Ʒ��� Feeling�� BLUE�� ���Ƽ� ���� �߻�
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
//	//cout << my_color1 << " " << COLOR_BLACK << endl; // integer������ ��µȴ�
//	//cout << my_color2 << " " << COLOR_BLUE << endl;
//	//cout << my_color3 << " " << COLOR_GREEN << endl;
//
//	Color my_color = static_cast<Color>(3);
//
//	// cin >> my_color; // �� ���� �߻�
//	//int in_number;
//	//cin >> in_number;
//
//	//if (in_number == COLOR_BLACK)
//	//{
//	//	my_color = COLOR_BLACK;
//	//	cout << "my_color is " << COLOR_BLACK << endl;
//	//}
//
//	// string���� �� �� ������ �������� ����
//	string str_input;
//	getline(cin, str_input);
//
//	if (str_input == "COLOR_BLACK")
//		my_color = static_cast<Color>(0);
//
//}