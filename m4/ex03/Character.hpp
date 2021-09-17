//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_CHARACTER_HPP
#define CPPM_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[4];
public:
	Character();
	Character(std::string name);
	Character(Character const & src	);
	~Character();

	Character & operator=(Character const & src);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //CPPM_CHARACTER_HPP
