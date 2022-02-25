// 클래스 안에 포함된 자료형(nested types)

#include <iostream>
using namespace std;

/*
enum FruitType
{
	APPLE,
	BANANA,
	CHERRY,
};
*/

class Fruit
{
public:
	// enum을 class 안에 넣는 것도 가능하고,
	// 이것을 enum class로 하는 것도 가능하다
	// enum class로 하면 아래에서 호출할 때 Fruit::FruitType::APPLE 처럼 해야 함
	enum class FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};
	// innerclass도 가능하고,
	class InnerClass
	{

	};
	// innerstruct도 가능
	struct InnerStructs
	{

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type)
		: m_type(type)
	{}

	FruitType getType()
	{
		return m_type;
	}
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}
}