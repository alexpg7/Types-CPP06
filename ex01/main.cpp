#include "Serializer.hpp"

int main(void)
{
	Data	data;

	data.data = 42;
	Data	*data2 = Serializer::deserialize(Serializer::serialize(&data));
	if (data2 == &data)
		std::cout << "They are equal!" << std::endl;
	else
		std::cout << "They are NOT equal!" << std::endl;
	return (0);
}
