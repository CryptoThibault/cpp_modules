#include "Serializer.hpp"

int	main(void) {
	Serializer	ser;
	Data *data = new Data;

	data->id = 42;
	data->name = "test";

	std::cout << "Data id: " << ser.deserialize(ser.serialize(data))->id << std::endl;
	std::cout << "Data name: " << ser.deserialize(ser.serialize(data))->name << std::endl;

	delete data;

	return 0;
}
