#pragma once

#include <iostream>
#include "Data.hpp"

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &scalar);
		~Serializer();
		Serializer& operator=(const Serializer& scalar);
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};
