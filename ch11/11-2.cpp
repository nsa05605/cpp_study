// 상속의 기본(2)
// Inheritance(is-a relationship)

#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student st1("Jack Jack", 2);
	st1.setName("James");
	cout << st1.getName() << endl;

	Teacher tc1("Dr. H");
	tc1.setName("Dr. K");
	cout << tc1.getName() << endl;
	
	st1.doNothing();

	st1.study();
	tc1.teach();

	Person person;
	person.setName("Mr. Incredible");
	cout << person.getName() << endl;;
	// person.study();

	return 0;
}