#include "ScalarConverter.hpp"

int main(int narg, char **argv)
{
	if (narg == 1)
	{
		std::cout << std::endl;
		ScalarConverter::convert(std::string("42"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("1.0"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("32.0674f"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("89f"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("5674789f"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("1000000000000000000"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("-859389.48298f"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("nan"));

		std::cout << std::endl;
		ScalarConverter::convert(std::string("inf"));
	}
	else
		ScalarConverter::convert(std::string(argv[1]));
	return (0);
}
