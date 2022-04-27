// STL Algorithm 소개

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> container;
	for (int i = 0; i < 10; i++) {
		container.push_back(i);
	}

	auto itr = min_element(container.begin(), container.end());
	cout << *itr << endl;

	itr = max_element(container.begin(), container.end());
	cout << *itr << endl;

	cout << endl;

	itr = find(container.begin(), container.end(), 3);
	container.insert(itr, 128);

	for (auto& e : container) {
		cout << e << " ";
	}
	cout << endl;

	sort(container.begin(), container.end());		// 오름차순 정렬

	for (auto& e : container) {
		cout << e << " ";
	}
	cout << endl;

	reverse(container.begin(), container.end());	// 순서 뒤집기

	for (auto& e : container) {
		cout << e << " ";
	}
	cout << endl;

	return 0;
}