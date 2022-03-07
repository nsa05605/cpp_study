// 컨테이너 클래스(Container Classes)

#include <iostream>
#include <vector>
#include <array>
using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	// Constructor
	// Destructor
	// initialize()
	// reset()
	// resize()
	// 
};

int main()
{
	// IntArray my_arr{1,3,5,7,9};
	// my_arr.insertBefore(10, 1);			// 1, 10, 3, 5, 7, 9
	// my_arr.remove(3);					// 1, 10, 3, 7, 9
	// my_arr.push_back(13);				// 1, 10, 3, 7, 9, 13

	vector<int> int_vec;
	array<int, 10> int_arr;

	return 0;
}