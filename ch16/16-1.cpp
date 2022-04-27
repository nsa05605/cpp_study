// 표준 템플릿 라이브러리(Standard Template Libraries)와 컨테이너(Container) 소개

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
using namespace std;

void sequence_containers() {
	// vector
	{
		vector<int> vec;
		for (int i = 0; i < 10; i++) {
			vec.push_back(i);
		}
		for (auto& e : vec) {
			cout << e << " ";
		}
		cout << endl;
	}

	// deque
	{
		deque<int> deq;
		for (int i = 0; i < 10; i++) {
			deq.push_back(i);
			deq.emplace_front(i);	// 9 8 7 6 5 4 3 2 1 0 순으로 0부터 들어가게 됨
		}
		for (auto& e : deq) {
			cout << e << " ";
		}
		cout << endl;
	}
}

void associative_containers() {
	// set
	// 원소가 중복이 되지 않음
	{
		set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;	// 2

		for (auto& e : str_set) {
			cout << e << " ";
		}
		cout << endl;
	}

	// multiset : duplication is allowed
	{
		multiset<string> str_multiset;

		str_multiset.insert("Hello");
		str_multiset.insert("World");
		str_multiset.insert("Hello");
	
		cout << str_multiset.size() << endl;	// 3

		for (auto& e : str_multiset) {
			cout << e << " ";
		}
		cout << endl;
	}

	// map : key / value
	{
		map<char, int> map;
		map['a'] = 10;
		map['b'] = 20;
		map['c'] = 50;

		cout << map['a'] << endl;

		map['a'] = 100;

		cout << map['a'] << endl;

		for (auto& e : map) {
			cout << e.first << " " << e.second << " ";
		}
		cout << endl;
	}

	// multimap : duplicated keys
	{
		multimap<char, int> multimap;
		multimap.insert(pair<char, int>('a', 10));
		multimap.insert(pair<char, int>('b', 10));
		multimap.insert(pair<char, int>('c', 10));
		multimap.insert(pair<char, int>('a', 100));

		cout << multimap.count('a') << endl;

		for (auto& e : multimap) {
			cout << e.first << " " << e.second << " ";
		}
		cout << endl;
	}
}

void container_adapters() {
	// stack
	{
		cout << "Stack" << endl;

		stack<int> stack;
		stack.push(1);		// push adds a copy
		stack.emplace(2);	// emplace constructs a new object
		stack.emplace(3);
		cout << stack.top() << endl;
		cout << stack.size() << endl;
		stack.pop();		// 위에 있는 것을 제거
		cout << stack.top() << endl;
		cout << stack.size() << endl;
		stack.pop();
		cout << stack.top() << endl;
		cout << stack.size() << endl;
	}

	// queue
	{
		cout << "Queue" << endl;

		queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		cout << queue.front() << " " << queue.back() << endl;	// 1 3
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl;	// 2 3
	}

	// Priority queue
	// sorting을 해줌
	{
		cout << "Priority queue" << endl;

		priority_queue<int> priority_queue;

		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
			priority_queue.push(n);

		for (int i = 0; i < 10; i++) {
			cout << priority_queue.top() << " ";
			priority_queue.pop();
		}
	}
}

int main()
{
	//sequence_containers();

	//associative_containers();

	container_adapters();

	return 0;
}