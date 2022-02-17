// 메모리 동적 할당 new와 delete

#include <iostream>

using namespace std;

int main()
{
	// int var;
	// var = 7;
	
	//int *ptr = new int;		// integer size에 맞춰서 메모리를 받아옴
	//*ptr = 7;

	// int *ptr = new int{ 7 };	// 이런 형식도 가능
	//int *ptr = new (std::nothrow) int{ 7 };	// error가 발생하지 않고 쭉 진행하도록
	//										// 만약 new가 실패를 하면 ptr에 nullptr이 들어감

	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}
	//else
	//{
	//	cout << "Could not allocate memory" << endl;
	//}

	//delete ptr;					// 메모리를 돌려줌
	//ptr = nullptr;				// ptr에 null을 기록
	//
	//cout << "After delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}

	
	
	// memory leak
	// OS로부터 메모리를 계속 받아만 오는 경우에 발생

	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;					// delete로 지워주는 것이 필요
	}
	// new와 delete은 시간이 걸리는 작업이기 때문에
	// 최적화를 위해 적게 사용하는 것이 good

	return 0;
}