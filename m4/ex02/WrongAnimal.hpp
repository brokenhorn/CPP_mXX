//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_WRONGANIMAL_HPP
#define CPPM_WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>


class WrongAnimal {
private:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();
	WrongAnimal(WrongAnimal const  & src);

	WrongAnimal & operator=(WrongAnimal const & src);

	void makeSound() const;
	std::string getType() const;
};


#endif //CPPM_WRONGANIMAL_HPP
