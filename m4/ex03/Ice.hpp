//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_ICE_HPP
#define CPPM_ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
private:

public:
	Ice();
	~Ice();
	Ice(Ice const &  src);

	Ice & operator=(Ice const & src);

	void use(ICharacter& target);

	Ice * clone() const;
};


#endif //CPPM_ICE_HPP
