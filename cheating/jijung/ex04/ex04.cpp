#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << "> using the pointer" << std::endl;
	std::cout << *ptr << std::endl;

	std::cout << "> using the reference" << std::endl;
	std::cout << ref << std::endl;

	return (0);
}