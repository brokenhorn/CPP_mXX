#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *d_ptr = new Data();
	uintptr_t u_ptr = serialize(d_ptr);
	d_ptr = deserialize(u_ptr);

	std::cout << "Data address before convertion: " << d_ptr << std::endl;
	std::cout << "Data value before convertion: " << d_ptr->getV() << std::endl;
	std::cout << "uintptr_t address: " << &u_ptr << std::endl;
	std::cout << "Data address after convertion: " << d_ptr << std::endl;
	std::cout << "Data value after convertion: " << d_ptr->getV() << std::endl;

	delete d_ptr;
	return 1;
}