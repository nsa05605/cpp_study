// ��Ʈ ���� ������
// ��Ʈ �÷���(flag), ��Ʈ ����ũ(mask)

#include <iostream>
#include <bitset> // 2������ ��ȯ���ִ� ���̺귯��

using namespace std;

//int main() {
//	
//	// << left shift
//	// >> right shift
//	// cin, cout���� ����ϴ� �Ͱ��� �ٸ�
//	// ~, &, |, ^
//
//	//unsigned int a = 3;
//
//	//cout << std::bitset<8>(a) << endl; // 3�� 2������ ��ȯ�ϸ� 0011�̹Ƿ� 0011�� ��µȴ�.
//
//	//unsigned int b = a << 1; // a�� 0011�ε� �������� 1ĭ�� �Űܼ� 0110���� ��ȯ
//
//	//cout << bitset<8>(b) << " " << b << endl;
//
//	// ��Ʈ ������ NOT ( ~ )
//	//unsigned int a = 1024;
//
//	//cout << bitset<16>(a) << endl;
//	//cout << bitset <16>(~a) << " " << (~a) << endl; // !�� logical NOT�̰�, ~�� bitwise NOT
//
//	//unsigned int x = 0b0010;
//	//unsigned int y = 0b0110;
//
//	//cout << std::bitset<4>(x & y) << endl; // bitwise AND
//	//cout << std::bitset<4>(x | y) << endl; // bitwise OR
//	//cout << std::bitset<4>(x ^ y) << endl; // bitwise XOR
//	// AND�� 0010, OR�� 0110, XOR�� 0100
//
//	// ��Ʈ �÷���
//
//	//bool item1_flag = false;
//	//bool item2_flag = false;
//	//bool item3_flag = false;
//	//bool item4_flag = false;
//	//// item ������ŭ ����� ����ε� ��ȿ������
//
//	//// event!
//	//item1_flag = true;
//
//	//// die! item2 los
//	//item2_flag = false;
//
//	//if (item3_flag == true) {
//	//	// event
//	//}
//
//	//if (item3_flag == true && item4_flag == false){
//	//	item3_flag == false;
//	//	item4_flag == true;
//	//}
//
//	//const unsigned char opt0 = 1 << 0;
//	//const unsigned char opt1 = 1 << 1;
//	//const unsigned char opt2 = 1 << 2;
//	//const unsigned char opt3 = 1 << 3;
//	//// opt4, 5, 6, 7
//
//	//cout << bitset<8>(opt0) << endl;
//	//cout << bitset<8>(opt1) << endl;
//	//cout << bitset<8>(opt2) << endl;
//	//cout << bitset<8>(opt3) << endl;
//
//	//unsigned char items_flag = 0;
//
//	//cout << "No item " << bitset<8>(items_flag) << endl;
//
//	//// item0 on
//	//items_flag |= opt0;
//	//cout << "item0 obtained " << bitset<8>(items_flag) << endl;
//
//	//// item3 on
//	//items_flag |= opt3;
//	//cout << "item3 obtained " << bitset<8>(items_flag) << endl;
//
//	//// item3 off
//	//items_flag &= ~opt3;
//	//cout << "item3 lost " << bitset<8>(items_flag) << endl;
//
//	//// has item1?
//	//if (items_flag & opt1)
//	//	cout << "Has item1 " << bitset<8>(items_flag) << endl;
//	//else
//	//	cout << "Do not have item1 " << bitset<8>(items_flag) << endl;
//
//	//// obtain item 2, 3
//	//items_flag |= (opt2 | opt3);
//
//	//cout << bitset<8>(opt2 | opt3) << endl;
//	//cout << "item2, 3 obtained " << bitset<8>(items_flag) << endl;
//
//	//// item2�� �ְ�, item1�� ���� ���
//	//if ((items_flag & opt2) && !(items_flag & opt1))
//	//{
//	//	items_flag ^= opt2; // XOR
//	//	items_flag ^= opt1;
//	//}
//
//	//cout << bitset<8>(items_flag) << endl;
//
//	// ��Ʈ ����ũ
//	
//  // �� RGB ���� 256����(0~255)�� ������ ǥ���ϱ� ���� 16���� 2�ڸ��� ����
//	const unsigned int red_mask = 0xFF0000;
//	const unsigned int green_mask = 0x00FF00;
//	const unsigned int blue_mask = 0x0000FF;
//
//	cout << std::bitset<32>(red_mask) << endl;
//	cout << std::bitset<32>(green_mask) << endl;
//	cout << std::bitset<32>(blue_mask) << endl;
//
//	unsigned int pixel_color = 0xDAA520; // ���� pixel�� RGB��
//
//	cout << bitset<32>(pixel_color) << endl;
//
//  // �� color�� �����ϱ� ���� �� mask�� �ڸ��� ��ġ�ϴ� ��Ʈ�� ����
//  // red�� green�� ���� 16, 8�ڸ��� ������ ��ġ�ϱ� ������ right shift ����
//	unsigned char red = (pixel_color & red_mask) >> 16;
//	unsigned char green = (pixel_color & green_mask) >> 8;
//	unsigned char blue = pixel_color & blue_mask;
//
//	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
//	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
//	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
//
//}