#include "Base.hpp"
#include "ABC.hpp"
#include <iostream>
#include <stdlib.h>

Base	*generate(void)
{
	int	n = rand() % 3;
	Base	*ret;

	if (n == 0)
		ret = new A();
	else if (n == 1)
		ret = new B();
	else
		ret = new C();
	return (ret);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != nullptr) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p) != nullptr) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p) != nullptr) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast&) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast&) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast&) {
				// Handle error here
			}
		}
	}
}

int main(void)
{
	srand(time(NULL));
	Base	*example;

	example = generate();
	identify(example);
	identify(*example);

	example = generate();
	identify(example);
	identify(*example);

	example = generate();
	identify(example);
	identify(*example);

	example = generate();
	identify(example);
	identify(*example);
}
