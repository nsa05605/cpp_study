// 예외처리의 위험성과 단점

#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error";	// descriptor 안에서 throw는 금기시
	}
};

int main()
{
	try
	{
		int* i = new int[100000];
		unique_ptr<int> up_i(i);	// smart ptr을 사용하면 delete가 필요 없음

		// do something with i
		throw "error";

		// delete[] i;
	}
	catch (...) {
		cout << "Catch" << endl;
	}

	return 0;
}