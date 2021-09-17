//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_DOG_HPP
#define CPPM_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(std::string type);
	~Dog();
	Dog(Dog const & src);

	Dog &operator=(Dog const & src);
};


#endif //CPPM_DOG_HPP
