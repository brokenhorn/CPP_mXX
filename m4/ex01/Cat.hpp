//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_CAT_HPP
#define CPPM_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat :  public  Animal
{
private:
	Brain* _brain;
public:
	Cat();
	Cat(std::string type);
	~Cat();
	Cat(Cat const & src);

	Cat & operator=(Cat const &src);

	void makeSound() const;
};


#endif //CPPM_CAT_HPP
