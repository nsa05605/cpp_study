// std::exception 소개

#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override	// noexcept : 함수 안에서는 예외를 던지지 않겠다는 의미
	{
		return "Custom Exception";
	}
};

int main()
{
	try
	{
		//std::string s;
		//s.resize(-1);

		//throw std::runtime_error("Bad thing happend");
		throw CustomException();
	}
	//catch (std::length_error& exception) {
	//	std::cout << "Length_Error" << endl;
	//	std::cerr << exception.what() << endl;
	//}
	catch (std::exception& exception)
	{
		std::cout << typeid(exception).name() << endl;
		std::cerr << exception.what() << endl;
	}

	return 0;
}