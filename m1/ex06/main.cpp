#include "Karen.hpp"



int main(int argc, char** argv)
{
	char *check = argv[1];
	Karen a;

	if (argc < 2 || argc > 2)
		return -1;

	a.complain(check);

}
