// 이동의 의미와 스마트 포인터 소개

#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

void doSomething() {
	//Resource* res = new Resource;	// dull pointer : 자기가 직접 delete를 해줘야하는 것
	AutoPtr<Resource> res = new Resource;
	// AutoPtr<Resource> res(new Resource);

	// work with res

	// if (true) return;	// early return 의 경우 delete를 하지 않는 문제가 발생할 수 있음
	// 혹은 try & catch 구문으로 throw를 하는 경우에도 같은 문제가 발생할 수 있음

	// delete res;

	return;
}

int main()
{
	// doSomething();

	{
		AutoPtr<Resource> res1(new  Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	return 0;
}