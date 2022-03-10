// 가상 기본 클래스(Virtual base classes)와 다이아몬드 문제(The Diamond problem)

#include <iostream>
using namespace std;

class A
{};
class B1 : public A
{};
class B2 : public A
{};
class C : public B1, public B2
{};

// 위의 경우 다이아몬드 모습이 나오는 경우도 있고, A가 2개 만들어지는 경우도 있다.
// 이것을 방지하기 위해 public 앞에 virtual을 붙여준다.

class PoweredDevice
{
public:
	int m_i;
	
	PoweredDevice(int power) {
		cout << "PowerDevice : " << power << endl;
	}
};

class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		: PoweredDevice(power)
	{
		cout << "Scanner : " << scanner << '\n';
	}
};

class Printer : virtual public PoweredDevice
{
public:
	Printer(int printer, int power)
		: PoweredDevice(power)
	{
		cout << "Printer : " << printer << '\n';
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power), Printer(printer, power),
		PoweredDevice(power)
	{}

};


int main()
{
	Copier cop(1, 2, 3);
	
	cout << &cop.Scanner::PoweredDevice::m_i << endl;
	cout << &cop.Printer::PoweredDevice::m_i << endl;




	return 0;
}