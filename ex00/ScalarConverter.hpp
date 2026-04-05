#pragma once

#include <iostream>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &scalar);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& scalar);
	public:
		static void convert(std::string input);
};
