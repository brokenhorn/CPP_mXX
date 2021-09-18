//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_DOG_HPP
#define CPPM_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(std::string type);
	~Dog();
	Dog(Dog const & src);

	Dog &operator=(Dog const & src);

	void makeSound() const;
};


#endif //CPPM_DOG_HPP
