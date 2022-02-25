// Ŭ���� �ȿ� ���Ե� �ڷ���(nested types)

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
	// enum�� class �ȿ� �ִ� �͵� �����ϰ�,
	// �̰��� enum class�� �ϴ� �͵� �����ϴ�
	// enum class�� �ϸ� �Ʒ����� ȣ���� �� Fruit::FruitType::APPLE ó�� �ؾ� ��
	enum class FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};
	// innerclass�� �����ϰ�,
	class InnerClass
	{

	};
	// innerstruct�� ����
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