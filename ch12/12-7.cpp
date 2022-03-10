// 순수(Pure) 가상 함수, 추상(Abstract) 기본 클래스, 인터페이스(Interface) 클래스
// 순수 가상 함수는 body가 없음
// 추상 클래스는 순수 가상 함수가 있는 클래스
// 인터페이스 클래스는 내부의 모든 함수가 순수 가상 함수인 경우

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

// pure virtual function을 정의할 수 있지만, 쓸모가 없음
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
// interface인 경우 앞에 I를 붙이는 것이 관습
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
	// 순수 가상 함수가 있기 때문에 생성이 되지 않음

	//Cow cow("wilson");
	//cow.speak();
	// 자식 class에서 부모 class에 있는 함수를 override 해주지 않으면 만들 수 없음



	FileErrorLog file_log;
	ConsolErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);


	return 0;
}