// ����(Association) ����

// #include "Lecture(composition).h"
#include "Lecture(aggregation).h"

int main()
{
	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	// Composition Relationship
	Lecture lec1("Introdution to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	// TODO : implement Aggregation Relationship
	// Composition�� ����
	// Jack Jack �� ��� lec1, lec2���� ���� �л����� ���� �����

	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}
}