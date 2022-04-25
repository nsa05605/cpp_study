// ����ó���� ���輺�� ����

#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error";	// descriptor �ȿ��� throw�� �ݱ��
	}
};

int main()
{
	try
	{
		int* i = new int[100000];
		unique_ptr<int> up_i(i);	// smart ptr�� ����ϸ� delete�� �ʿ� ����

		// do something with i
		throw "error";

		// delete[] i;
	}
	catch (...) {
		cout << "Catch" << endl;
	}

	return 0;
}