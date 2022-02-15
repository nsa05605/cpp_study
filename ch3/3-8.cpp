// 비트 단위 연산자
// 비트 플래그(flag), 비트 마스크(mask)

#include <iostream>
#include <bitset> // 2진수로 변환해주는 라이브러리

using namespace std;

//int main() {
//	
//	// << left shift
//	// >> right shift
//	// cin, cout에서 사용하는 것과는 다름
//	// ~, &, |, ^
//
//	//unsigned int a = 3;
//
//	//cout << std::bitset<8>(a) << endl; // 3를 2진수로 변환하면 0011이므로 0011이 출력된다.
//
//	//unsigned int b = a << 1; // a가 0011인데 좌측으로 1칸씩 옮겨서 0110으로 변환
//
//	//cout << bitset<8>(b) << " " << b << endl;
//
//	// 비트 연산자 NOT ( ~ )
//	//unsigned int a = 1024;
//
//	//cout << bitset<16>(a) << endl;
//	//cout << bitset <16>(~a) << " " << (~a) << endl; // !는 logical NOT이고, ~이 bitwise NOT
//
//	//unsigned int x = 0b0010;
//	//unsigned int y = 0b0110;
//
//	//cout << std::bitset<4>(x & y) << endl; // bitwise AND
//	//cout << std::bitset<4>(x | y) << endl; // bitwise OR
//	//cout << std::bitset<4>(x ^ y) << endl; // bitwise XOR
//	// AND는 0010, OR는 0110, XOR는 0100
//
//	// 비트 플래그
//
//	//bool item1_flag = false;
//	//bool item2_flag = false;
//	//bool item3_flag = false;
//	//bool item4_flag = false;
//	//// item 개수만큼 만드는 방법인데 비효율적임
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
//	//// item2는 있고, item1은 없는 경우
//	//if ((items_flag & opt2) && !(items_flag & opt1))
//	//{
//	//	items_flag ^= opt2; // XOR
//	//	items_flag ^= opt1;
//	//}
//
//	//cout << bitset<8>(items_flag) << endl;
//
//	// 비트 마스크
//	
//  // 각 RGB 값을 256까지(0~255)의 값으로 표현하기 위해 16진수 2자리씩 배정
//	const unsigned int red_mask = 0xFF0000;
//	const unsigned int green_mask = 0x00FF00;
//	const unsigned int blue_mask = 0x0000FF;
//
//	cout << std::bitset<32>(red_mask) << endl;
//	cout << std::bitset<32>(green_mask) << endl;
//	cout << std::bitset<32>(blue_mask) << endl;
//
//	unsigned int pixel_color = 0xDAA520; // 구할 pixel의 RGB값
//
//	cout << bitset<32>(pixel_color) << endl;
//
//  // 각 color만 추출하기 위해 각 mask값 자리와 일치하는 비트만 추출
//  // red와 green은 각각 16, 8자리씩 상위에 위치하기 때문에 right shift 실행
//	unsigned char red = (pixel_color & red_mask) >> 16;
//	unsigned char green = (pixel_color & green_mask) >> 8;
//	unsigned char blue = pixel_color & blue_mask;
//
//	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
//	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
//	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
//
//}