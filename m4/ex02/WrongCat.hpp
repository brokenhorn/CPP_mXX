//
// Created by Voncile Maricruz on 9/13/21.
//

#ifndef CPPM_WRONGCAT_HPP
#define CPPM_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	~WrongCat();
	WrongCat(WrongCat const & src);

	WrongCat & operator=(WrongCat const &src);

};


#endif //CPPM_WRONGCAT_HPP
