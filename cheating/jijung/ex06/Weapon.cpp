#include "Weapon.hpp"

Weapon::Weapon(std::string const &type):
	type(type) {}

Weapon::~Weapon() {}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void				Weapon::setType(std::string const &type)
{
	this->type = type;
}
