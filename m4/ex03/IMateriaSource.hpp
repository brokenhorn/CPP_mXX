
#ifndef CPPM_IMATERIASOURCE_HPP
#define CPPM_IMATERIASOURCE_HPP

class AMateria;
#include <string>

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};


#endif //CPPM_IMATERIASOURCE_HPP
