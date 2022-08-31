/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:00:24 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 21:59:42 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "Stack";
}

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie() {
	std::cout << _name << " is removed" << std::endl;
}

Zombie	**Zombie::getHorde() {
	return _horde;
}

void	Zombie::announce() {
	std::cout <<
	"<" << _name << ">  BraiiiiiiinnnzzzZ..."
	<< std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
	return (new Zombie(name));
}

void	Zombie::randomChump(std::string str) {
	Zombie	*zombie;

	zombie = newZombie(str);
	zombie->announce();
	delete zombie;
}
