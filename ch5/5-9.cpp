// ���� �����
// Random Number Generation

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime>
#include <random> // random library

using namespace std;


// ������ ����� �Լ��� ����
//unsigned int PRNG() // Pseudo Random Number Generator
//{
//	static unsigned int seed = 5523; // seed number
//
//	seed = 8253729 * seed + 2396403;
//
//	return seed % 32768;
//}

//int getRandomNumber(int min, int max)
//{
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//
//	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
//}

//int main()
//{
//	//for (int count = 1; count <= 100; ++count)
//	//{
//	//	cout << PRNG() << "\t";
//	//	
//	//	if (count % 5 == 0)
//	//		cout << endl;
//	//}
//
//	// std::srand(5323);
//	//std::srand(static_cast<unsigned int>(std::time(0))); // seed
//
//	//for (int count = 1; count <= 100; ++count)
//	//{
//	//	cout << std::rand() << "\t";
//
//	//	if (count % 5 == 0) cout << endl;
//	//}
//	//// seed number�� �����Ǿ� ������ ���� ���ڸ� �����
//
//	//for (int count = 1; count <= 100; ++count)
//	//{
//	//	cout << getRandomNumber(5, 8) << "\t";
//
//	//	if (count % 5 == 0) cout << endl;
//	//}
//
//	std::random_device rd;
//	std::mt19937_64 mersenne(rd());	// 64��Ʈ�� ������  ����
//									// create a mesenne twister
//	std::uniform_int_distribution<> dice(1, 6);	// 1~6 �� ������ �Ǵµ� Ȯ���� ������
//
//	for (int count = 1; count <= 20; ++count)
//	{
//		cout << dice(mersenne) << endl;
//	}
//
//}