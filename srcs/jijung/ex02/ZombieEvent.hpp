#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class	ZombieEvent
{
	public:
		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		std::string		randomName();
		Zombie			*randomChump();

	private:
		std::string		event_type_;
};

#endif
