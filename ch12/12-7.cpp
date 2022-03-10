// ����(Pure) ���� �Լ�, �߻�(Abstract) �⺻ Ŭ����, �������̽�(Interface) Ŭ����
// ���� ���� �Լ��� body�� ����
// �߻� Ŭ������ ���� ���� �Լ��� �ִ� Ŭ����
// �������̽� Ŭ������ ������ ��� �Լ��� ���� ���� �Լ��� ���

#include <iostream>
using namespace std;

class Animal
{
protected:
	string m_name;
public:
	Animal(string name)
		: m_name(name)
	{}

	virtual void speak() const = 0;		// pure virtual function
	//string getName() { return m_name; }
	//virtual void speak() const {
	//	cout << m_name << " ??? " << endl;
	//}
};

// pure virtual function�� ������ �� ������, ���� ����
void Animal::speak() const {
	cout << m_name << " ??? " << endl;
}


class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}
	void speak() const {
		cout << m_name << " Meow " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}
	void speak() const {
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}
	//void speak() const {
	//	cout << m_name << " Mooo " << endl;
	//}
};



// interface class
// interface�� ��� �տ� I�� ���̴� ���� ����
class IErrorLog
{
public:
	virtual bool reportError(const char* errorMessage) = 0;

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override {
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsolErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override {
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log) {
	log.reportError("Runtime error!");
}


int main()
{
	// Animal ani("Hi");
	// ���� ���� �Լ��� �ֱ� ������ ������ ���� ����

	//Cow cow("wilson");
	//cow.speak();
	// �ڽ� class���� �θ� class�� �ִ� �Լ��� override ������ ������ ���� �� ����



	FileErrorLog file_log;
	ConsolErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);


	return 0;
}