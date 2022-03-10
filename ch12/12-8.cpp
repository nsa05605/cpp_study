// ���� �⺻ Ŭ����(Virtual base classes)�� ���̾Ƹ�� ����(The Diamond problem)

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

// ���� ��� ���̾Ƹ�� ����� ������ ��쵵 �ְ�, A�� 2�� ��������� ��쵵 �ִ�.
// �̰��� �����ϱ� ���� public �տ� virtual�� �ٿ��ش�.

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