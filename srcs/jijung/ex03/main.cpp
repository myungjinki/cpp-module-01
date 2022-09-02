#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	makeStackZombieHorde(void)
{
	std::cout << "-----create zombieHorde-----" << std::endl;
	ZombieHorde	zombiehorde1(3, "red");
	zombiehorde1.announce();
}

int		main(void)
{
	srand((unsigned)time(NULL));

	makeStackZombieHorde();
	std::cout << std::endl;

	std::cout << "-----create zombieHorde------" << std::endl;
	ZombieHorde	*zombiehorde2 = new ZombieHorde(10, "blue");
	zombiehorde2->announce();
	delete zombiehorde2;

	std::cout << std::endl;
	std::cout << "--------------end--------------" << std::endl;

	return (0);
}