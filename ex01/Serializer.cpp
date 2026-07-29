#include "Serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer &serialier)
{
	return ;
}

Serializer::~Serializer()
{
	return ;
}

Serializer&	Serializer::operator=(const Serializer& serializer)
{
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
