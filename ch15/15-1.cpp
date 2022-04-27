// �̵��� �ǹ̿� ����Ʈ ������ �Ұ�

#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

void doSomething() {
	//Resource* res = new Resource;	// dull pointer : �ڱⰡ ���� delete�� ������ϴ� ��
	AutoPtr<Resource> res = new Resource;
	// AutoPtr<Resource> res(new Resource);

	// work with res

	// if (true) return;	// early return �� ��� delete�� ���� �ʴ� ������ �߻��� �� ����
	// Ȥ�� try & catch �������� throw�� �ϴ� ��쿡�� ���� ������ �߻��� �� ����

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