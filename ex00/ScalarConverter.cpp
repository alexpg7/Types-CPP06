#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &bscalar)
{
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& scalar)
{
	return (*this);
}

std::string isPrintableChar(std::string input) {
	int i = 0;
	try
	{
		i = std::stoi(input);
	}
	catch (std::out_of_range &e) {
		return ("oof");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ("Nan");
	}
	char c = static_cast<char>(i);
	if (std::isprint(c))
		return (std::string("'") + c + std::string("'"));
	else
		return ("Non displayable");
}

std::string isInt(std::string input) {
	try {
		int num = std::stoi(input);
		return std::to_string(num);
		} catch (...) {
			return "Nan";
	}
}

std::string isFloat(std::string input) {
	try {
		float fl = std::stof(input);
		return (std::to_string(fl).substr(0, std::to_string(fl).find('.') + 2) + "f");
	} catch (...) {
		return "Nan";
	}
}

std::string isDouble(std::string input) {
	try {
		double dbl = std::stod(input);
		return (std::to_string(dbl).substr(0, std::to_string(dbl).find('.') + 2));
	} catch (...) {
		return "Nan";
	}
}

void ScalarConverter::convert(std::string input) {
	try
	{
		size_t pos;
		std::stof(input, &pos);
		if ((pos != input.length() && pos != input.length() - 1)
			|| (pos == input.length() - 1
			&& input[pos] != 'f'
			&& input[pos] != 'F')) {
				return (std::cout << "This is not a valid input" << std::endl, void());
		}
	}
	catch(const std::exception& e)
	{
		return (std::cout << "This is not a valid input" << std::endl, void());
	}

	if (input.compare("nan") == 0 || input.compare("nanf") == 0
		|| input.compare("inf") == 0 || input.compare("inff") == 0
		|| input.compare("+inf") == 0 || input.compare("+inff") == 0
		|| input.compare("-inf") == 0 || input.compare("-inff") == 0) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << input << std::endl;
			std::cout << "double: " << input << std::endl;
			return;
	}

	std::cout << "Input: " << input << std::endl;
	std::cout << "char: " << isPrintableChar(input) << std::endl;
	std::cout << "int: " << isInt(input) << std::endl;
	std::cout << "float: " << isFloat(input)<< std::endl;
	std::cout << "double: " << isDouble(input)<< std::endl;
}