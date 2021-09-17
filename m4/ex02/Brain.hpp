//
// Created by Voncile Maricruz on 9/15/21.
//

#ifndef CPPM_BRAIN_HPP
#define CPPM_BRAIN_HPP

#include <string>
#include <iostream>
#include "fstream"
#include <iomanip>

class Brain {
private:
		std::string ideas[100];
public:
	Brain();
	Brain(std::string idea);
	Brain(Brain const & src);
	~Brain();

	Brain &operator =(const Brain &src);
};


#endif //CPPM_BRAIN_HPP
