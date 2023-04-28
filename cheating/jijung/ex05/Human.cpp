#include "Human.hpp"

std::string		Human::identify()
{
	return (brain_.identify());
}

Brain			&Human::getBrain()
{
	return (brain_);
}