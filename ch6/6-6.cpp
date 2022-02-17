// C언어 스타일의 배열 문자열
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//char myString[] = "string"; // string은 char [7]으로 나온다
	//							// string\0의 형태이기 때문

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}
	//							// ASCII로 출력을 하면 맨 뒤에 0이 있다.

	//char myString2[255];

	////cin >> myString2;
	//cin.getline(myString2, 255);
	////myString2[4] = '\0';	// 입력의 5번째 자리부터 null로 바뀌어 4번째까지만 출력된다

	//cout << myString2 << endl;
	//
	//int ix = 0;
	//while (true)
	//{
	//	if (myString2[ix] == '\0') break;

	//	cout << myString2[ix] << " " << (int)myString2[ix] << endl;
	//	++ix;
	//}
								// null과 spacebar의 ASCII는 다르다는 것을 보기 위함


	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);	// source를 dest에 복사하는 함수

	//cout << source << endl;
	//cout << dest << endl;

	// strcat()
	// strcmp()

	strcat(dest, source);		// source를 dest에 붙여주는 함수

	cout << source << endl;
	cout << dest << endl;

	cout << strcmp(source, dest) << endl;	// source와 dest가 같으면 0, 아니면 -1 출력

}