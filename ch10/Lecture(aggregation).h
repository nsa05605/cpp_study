#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	string m_name;
	Teacher *teacher;
	vector<Student*> students;

public:
	Lecture(const string& name)
		: m_name(name)
	{}
	~Lecture(){}

	void assignTeacher(Teacher* const teacher_input) {
		teacher = teacher_input;
	}

	void registerStudent(Student* const student_input) {
		students.push_back(student_input);

		// &student_input != &students[0]
	}

	void study() {
		cout << m_name << " study " << endl << endl;

		for (auto& element : students)
			element->setIntel(element->getIntel() + 1);
			// (*element).setIntel((*element).getIntel() + 1); 와 같은 의미
	}

	friend ostream& operator << (ostream& out, const Lecture& lecture) {
		out << "Lecture name : " << lecture.m_name << endl;
		out << *lecture.teacher << endl;
		for (auto element : lecture.students)
			out << *element << endl;

		return out;
	}
};