#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N, std::string type):
	 horde_size_(N), horde_type_(type)
{
	zombies_ = new Zombie[horde_size_];
	for (int i = 0 ; i < horde_size_ ; i++)
		zombies_[i].setZombie(randomName(), horde_type_);
}

std::string	ZombieHorde::randomName()
{
	std::string		names[10] = {"Nidalee", "Akali", "Ekko", "Malphite", "Teemo", \
								"Fizz", "Sylas", "Garen", "Trundle", "Ezreal"};
	std::string		get_name = names[rand() % 10];
	
	return (get_name);
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies_;
	std::cout << "\033[0;34mHorde is destroyed.\033[0m" << std::endl;
}

void	ZombieHorde::announce(void)
{
	std::cout << "A total of " << horde_size_ << " zombies shout!!!" << std::endl;
	for (int i = 0 ; i < horde_size_ ; i++)
		zombies_[i].announce();
}