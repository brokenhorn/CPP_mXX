//
// Created by Voncile Maricruz on 9/19/21.
//

#ifndef CPPM_DATA_HPP
#define CPPM_DATA_HPP

#include "string"
#include <iostream>

class Data
{
private:
	int v;
public:
	Data();
	~Data();
	Data(Data const & src);

	Data & operator=(Data const & src);

	int getV();
};


#endif //CPPM_DATA_HPP
