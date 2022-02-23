#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> my_vector1;
	vector<int> my_vector2(5);
	vector<int> my_vector3(5, 2);
	vector<int> my_vector4(my_vector3);

	my_vector2.resize(2);	// capacity는 그대로
	my_vector4.reserve(10);	// capacity만 변화

	cout << my_vector1.size() << endl;
	cout << my_vector1.capacity() << endl;
	cout << my_vector2.size() << endl;
	cout << my_vector2.capacity() << endl;
	cout << my_vector3.size() << endl;
	cout << my_vector3.capacity() << endl;
	cout << my_vector4.size() << endl;
	cout << my_vector4.capacity() << endl;


}