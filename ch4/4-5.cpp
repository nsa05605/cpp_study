// �Ͻ��� ����ȯ(Implicit Type Conversion)(coersion)��
// ����� ����ȯ(Ecplicit Type Conversion)(casting)

#include <iostream>
#include <typeinfo>
#include <iomanip>
// typeinfo�� ������ ���¸� �� �� �ֵ��� ������

using namespace std;

//int main() {
//
//	//int a = 123.0; // �̷��� �����ص� int������ ����
//
//	//cout << typeid(4.0).name() << endl;
//	//cout << typeid(a).name() << endl;
//	
//	// numeric promotion
//	// ������ �ڷ������� Ŀ���� ���� ���� x
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
//	//// double -> float�� ���е� �϶� ���ɼ�
//	//cout << std::setprecision(12) << f << endl; 
//
//	//float f = 3.14f;
//	//int i = f;
//	//cout << std::setprecision(12) << i << endl;
//	
//}