#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

class	ZombieHorde
{
	public:
		ZombieHorde(int N, std::string type);
		std::string	randomName(void);
		void		announce(void);
		~ZombieHorde();

	private:
		int			horde_size_;
		std::string	horde_type_;
		Zombie		*zombies_;
};

#endif
