#include "Contact.h"

#ifndef CPPM_PHONEBOOK_H
#define CPPM_PHONEBOOK_H


class Phonebook
{
private:
		Contact list[8];
public:
		void ShowAll();
		void Add(int ListN);

};


#endif
