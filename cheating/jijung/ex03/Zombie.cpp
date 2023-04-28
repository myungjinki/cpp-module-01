#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, std::string type):
	name_(name), type_(type) {}

Zombie::~Zombie()
{
	std::cout << "\033[0;33mZombie " << name_ << "(" << type_ << ") died.\033[0m" << std::endl;
}

void		Zombie::announce(void)
{
	std::cout << "\033[0;31m<" << name_ << " (" << type_ << ")> ";
	std::cout << "Braiiiiiiinnnssss...\033[0m" << std::endl;
}

void		Zombie::setZombie(std::string name, std::string type)
{
	name_ = name;
	type_ = type;
}