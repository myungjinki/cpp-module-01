#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	event_type_ = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, event_type_));
}

std::string	ZombieEvent::randomName(void)
{
	std::string		names[10] = {"Nidalee", "Akali", "Ekko", "Malphite", "Teemo", \
									"Fizz", "Sylas", "Garen", "Trundle", "Ezreal"};
	std::string		get_name = names[rand() % 10];
	
	return (get_name);
}
Zombie	*ZombieEvent::randomChump()
{
	std::string name = randomName();
	Zombie	*zombie = newZombie(name);
	zombie->announce();
	return (zombie);
}