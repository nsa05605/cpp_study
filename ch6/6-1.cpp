// �迭(array)�� �������� ����

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
	NUM_STUDENT,	// 3, ������ �л� ���Ŀ� ������ ���ڰ� �� �´´�.
};

void doSomething(int students_scores[])	// students_scores �� ���⼭ �迭�� �ƴ� pointer
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
	//student_scores[0] = 100;	// 0��° element
	//student_scores[1] = 80;
	//student_scores[2] = 90;
	//student_scores[3] = 40;
	//student_scores[4] = 0;

	//for (int i=0; i<5; i++)
	//	cout << student_scores[i] << endl;



	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl;
	
	
	//// array �ʱ�ȭ
	//int my_array[5] = { 1, 2, 3, 4, 5 };

	//// enum�� ȥ�� ����
	//cout << my_array[JACKJACK] << endl;

	//int students_scores[NUM_STUDENT];

	//students_scores[JACKJACK] = 0;
	//students_scores[DASH] = 100;

	//int num_students = 0;
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };
	//// []�ȿ� ���� ���ڴ� �������־�� �ϴµ�, cin�� ���� �������� �𸣱� ������ error
	//// �ذ��Ϸ��� ��ܿ��� #define NUM_STUDENTS 100000 ������ ��ũ�� ���� �ʿ� -> ���� x
	//// Ȥ�� cin ���� const int�� ����

	cout << students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	//cout << (int)&students_scores[3] << endl;
	cout << "Size of main " << sizeof(students_scores) << endl;

	//cout << sizeof(students_scores) << endl;

	doSomething(students_scores);	// array�� �Լ��� parameter�� ���� �� �ִ�.

}