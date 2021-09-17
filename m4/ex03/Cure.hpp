//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_CURE_HPP
#define CPPM_CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{
private:

public:
	Cure();
	~Cure();
	Cure(Cure const & src);

	Cure & operator=(Cure const & src);

	void use(ICharacter& target);

	Cure * clone() const;
};


#endif //CPPM_CURE_HPP
