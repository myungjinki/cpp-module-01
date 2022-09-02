#include "Brain.hpp"

std::string		Brain::identify()
{
	long addr = (long)this;
	std::stringstream	ss;

	ss << "0x" << std::uppercase << std::hex << addr;

	return (ss.str());
}