// �޸� ���� �Ҵ� new�� delete

#include <iostream>

using namespace std;

int main()
{
	// int var;
	// var = 7;
	
	//int *ptr = new int;		// integer size�� ���缭 �޸𸮸� �޾ƿ�
	//*ptr = 7;

	// int *ptr = new int{ 7 };	// �̷� ���ĵ� ����
	//int *ptr = new (std::nothrow) int{ 7 };	// error�� �߻����� �ʰ� �� �����ϵ���
	//										// ���� new�� ���и� �ϸ� ptr�� nullptr�� ��

	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}
	//else
	//{
	//	cout << "Could not allocate memory" << endl;
	//}

	//delete ptr;					// �޸𸮸� ������
	//ptr = nullptr;				// ptr�� null�� ���
	//
	//cout << "After delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}

	
	
	// memory leak
	// OS�κ��� �޸𸮸� ��� �޾Ƹ� ���� ��쿡 �߻�

	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;					// delete�� �����ִ� ���� �ʿ�
	}
	// new�� delete�� �ð��� �ɸ��� �۾��̱� ������
	// ����ȭ�� ���� ���� ����ϴ� ���� good

	return 0;
}