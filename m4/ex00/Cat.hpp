//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_CAT_HPP
#define CPPM_CAT_HPP

#include "Animal.hpp"

class Cat :  public  Animal
{
public:
	Cat();
	Cat(std::string type);
	~Cat();
	Cat(Cat const & src);

	Cat & operator=(Cat const &src);

};


#endif //CPPM_CAT_HPP
