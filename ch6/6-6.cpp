// C��� ��Ÿ���� �迭 ���ڿ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//char myString[] = "string"; // string�� char [7]���� ���´�
	//							// string\0�� �����̱� ����

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}
	//							// ASCII�� ����� �ϸ� �� �ڿ� 0�� �ִ�.

	//char myString2[255];

	////cin >> myString2;
	//cin.getline(myString2, 255);
	////myString2[4] = '\0';	// �Է��� 5��° �ڸ����� null�� �ٲ�� 4��°������ ��µȴ�

	//cout << myString2 << endl;
	//
	//int ix = 0;
	//while (true)
	//{
	//	if (myString2[ix] == '\0') break;

	//	cout << myString2[ix] << " " << (int)myString2[ix] << endl;
	//	++ix;
	//}
								// null�� spacebar�� ASCII�� �ٸ��ٴ� ���� ���� ����


	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);	// source�� dest�� �����ϴ� �Լ�

	//cout << source << endl;
	//cout << dest << endl;

	// strcat()
	// strcmp()

	strcat(dest, source);		// source�� dest�� �ٿ��ִ� �Լ�

	cout << source << endl;
	cout << dest << endl;

	cout << strcmp(source, dest) << endl;	// source�� dest�� ������ 0, �ƴϸ� -1 ���

}