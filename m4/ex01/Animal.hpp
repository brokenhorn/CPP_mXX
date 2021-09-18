//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_ANIMAL_HPP
#define CPPM_ANIMAL_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(Animal const  & src);

	Animal & operator=(Animal const & src);

	virtual void makeSound() const;
	std::string getType() const;
};


#endif //CPPM_ANIMAL_HPP
