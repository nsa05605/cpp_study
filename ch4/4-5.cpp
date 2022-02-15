// 암시적 형변환(Implicit Type Conversion)(coersion)과
// 명시적 형변환(Ecplicit Type Conversion)(casting)

#include <iostream>
#include <typeinfo>
#include <iomanip>
// typeinfo는 변수의 형태를 볼 수 있도록 도와줌

using namespace std;

//int main() {
//
//	//int a = 123.0; // 이렇게 선언해도 int형으로 저장
//
//	//cout << typeid(4.0).name() << endl;
//	//cout << typeid(a).name() << endl;
//	
//	// numeric promotion
//	// 기존의 자료형보다 커지는 경우는 문제 x
//	//float a = 1.0f;
//	//double d = a;
//	
//	// numeric conversion
//	// 
//	//int i = 30000;
//	//char c = i;
//	//
//	//cout << static_cast<int>(c) << " " << typeid(c).name() << endl;
//
//	//double d = 0.123456789;
//	//float f = d;
//	//// double -> float은 정밀도 하락 가능성
//	//cout << std::setprecision(12) << f << endl; 
//
//	//float f = 3.14f;
//	//int i = f;
//	//cout << std::setprecision(12) << i << endl;
//	
//}