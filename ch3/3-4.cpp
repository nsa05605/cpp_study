// sizeof, comma operator

#include <iostream>

using namespace std;

//int main()
//{
//	// float a;
//	// sizeof
//	// sizeof a; // sizeof는 함수가 아닌 연산자(operator)라서 ()가 필요 없다.
//	// sizeof(float); // float 등의 형을 넣으려면 ()가 필요함
//
//	//comma
//	int x = 3;
//	int y = 10;
//	// int z = (++x, ++y);
//	// ++x;
//	// ++y;
//	// int z = y; // comma 연산자는 다음의 과정으로 볼 수 있다.
//
//	// cout << x << " " << y << " " << z << endl;
//
//	int a = 1, b = 10;
//	int z;
//
//	z = a, b;
//	// ( z = a ), b;로 보면 되는데 z에 a를 넣고 끝이 난다.
//	// z = (a, b); 로 쓰면 위의 식처럼 계산된다.
//	// z = (++a, a + b); 등으로 쓸 수 있다.
//
//	cout << z << endl;
//
//	// conditional operator (arithmetric if)
//	bool onSale = true;
//
//	//int price;
//	const int price = (onSale == true) ? 10 : 100; // 아래의 if문을 const int 안에 넣어서 사용할 수 있다.
//	// const int price = getPrice(onSale); // 아래 만든 함수를 사용할 때
//
//	//if (onSale)
//	//	price = 10;
//	//else
//	//	price = 100;
//
//	cout << price << endl;
//
//}
//
//// 위의 if 구문을 함수로 다음과 같은 함수로도 정의할 수 있다.
//int getPrice(bool onSale)
//{
//	if (onSale)
//		return 10;
//	else return 100;
//}