#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void			announce(void);
		void			setZombie(std::string name, std::string type);
		~Zombie();

	private:
		std::string		name_;
		std::string		type_;
};

#endif
