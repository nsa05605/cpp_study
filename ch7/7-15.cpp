// 명령줄 인수

#include <iostream>
#include <string>

using namespace std;
// int argc : 메인함수에 전달되는 정보의 개수
// char *argv[] : 메인함수에 전달되는 실질적인 정보로, 문자열의 배열
// 첫 번째 문자열은 프로그램의 경로로 고정
//int main(int argc, char *argv[])
//{
//	for (int count = 0; count < argc; ++count)
//	{
//		string argv_single = argv[count];
//
//		if (count == 1)
//		{
//			int input_number = std::stoi(argv_single);
//			cout << input_number + 1 << endl;
//		}
//		else
//			cout << argv_single << endl;
//
//		cout << argv[count] << endl;
//	}
//
//}