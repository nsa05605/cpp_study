// 배열(array)의 기초적인 사용법

#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,		// 0
	DASH,			// 1
	VIOLET,			// 2
	NUM_STUDENT,	// 3, 마지막 학생 이후에 넣으면 숫자가 딱 맞는다.
};

void doSomething(int students_scores[])	// students_scores 는 여기서 배열이 아닌 pointer
{
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething " << sizeof(students_scores) << endl;
}

int main()
{
	//int one_student_score;	// 1 variable
	//int student_scores[5];	// 5 int

	////cout << sizeof(one_student_score) << endl;	// 4
	////cout << sizeof(student_scores) << endl;		// 20

	//one_student_score = 100;
	//
	//student_scores[0] = 100;	// 0번째 element
	//student_scores[1] = 80;
	//student_scores[2] = 90;
	//student_scores[3] = 40;
	//student_scores[4] = 0;

	//for (int i=0; i<5; i++)
	//	cout << student_scores[i] << endl;



	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl;
	
	
	//// array 초기화
	//int my_array[5] = { 1, 2, 3, 4, 5 };

	//// enum과 혼용 가능
	//cout << my_array[JACKJACK] << endl;

	//int students_scores[NUM_STUDENT];

	//students_scores[JACKJACK] = 0;
	//students_scores[DASH] = 100;

	//int num_students = 0;
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };
	//// []안에 들어가는 숫자는 정해져있어야 하는데, cin은 실행 전까지는 모르기 때문에 error
	//// 해결하려면 상단에서 #define NUM_STUDENTS 100000 등으로 매크로 지정 필요 -> 권장 x
	//// 혹은 cin 없이 const int로 선언

	cout << students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	//cout << (int)&students_scores[3] << endl;
	cout << "Size of main " << sizeof(students_scores) << endl;

	//cout << sizeof(students_scores) << endl;

	doSomething(students_scores);	// array를 함수의 parameter로 넣을 수 있다.

}