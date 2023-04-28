#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	makeStackZombie(void)
{
	Zombie			stackZombie;

	std::cout << "-----create stackZombie-----" << std::endl;
	stackZombie.setZombie("ex02", "stack");
	stackZombie.announce();
}

int		main(void)
{
	ZombieEvent		heapZombieEvent;	
	Zombie			*heapZombie;	

	srand(time(NULL));

	makeStackZombie();

	std::cout << std::endl;

	std::cout << "-----create heapZombie------" << std::endl;
	heapZombieEvent.setZombieType("heap1");
	heapZombie = heapZombieEvent.randomChump();
	delete heapZombie;

	std::cout << std::endl;

	std::cout << "-----create heapZombie------" << std::endl;
	heapZombieEvent.setZombieType("heap2");
	heapZombie = heapZombieEvent.newZombie("module");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl;
	std::cout << "------------end-------------" << std::endl;

	return (0);
}