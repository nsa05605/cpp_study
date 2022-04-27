// STL 반복자(iterators) 소개

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;


int main()
{
	// vector
	vector<int> container_vector;
	for (int i = 0; i < 10; i++) {
		container_vector.push_back(i);
	}

	vector<int>::const_iterator itr_vec;
	itr_vec = container_vector.begin();
	while (itr_vec != container_vector.end()) {
		cout << *itr_vec << " ";

		itr_vec++;
	}
	cout << endl;

	for (auto itr_vec = container_vector.begin(); itr_vec != container_vector.end(); itr_vec++) {
		cout << *itr_vec << " ";
	}
	cout << endl;

	for (auto& e : container_vector) {
		cout << e << " ";
	}
	cout << endl;


	// list
	list<int> container_list;
	for (int i = 0; i < 10; i++) {
		container_list.push_back(i);
	}
	for (auto itr_list = container_list.begin(); itr_list != container_list.end(); itr_list++) {
		cout << *itr_list << " ";
	}
	cout << endl;

	
	// set
	set<int> container_set;
	for (int i = 0; i < 10; i++) {
		container_set.insert(i);
	}
	for (auto itr_set = container_set.begin(); itr_set != container_set.end(); itr_set++) {
		cout << *itr_set << " ";
	}
	cout << endl;


	// map
	map<int, char> container_map;
	for (int i = 0; i < 10; i++) {
		container_map.insert(make_pair(i, char(i + 65)));
	}
	for (auto itr_map = container_map.begin(); itr_map != container_map.end(); itr_map++) {
		cout << itr_map->first << " " << itr_map->second << endl;
	}
	cout << endl;

	return 0;
}