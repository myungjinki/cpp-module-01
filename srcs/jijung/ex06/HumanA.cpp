#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon):
	weapon(weapon), name(name) {}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << \
				this->weapon.getType() << std::endl;
}
