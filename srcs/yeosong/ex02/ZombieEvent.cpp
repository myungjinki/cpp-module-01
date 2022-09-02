/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:39:32 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 21:09:45 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void    ZombieEvent::randomChump(void)
{
	std::string names[] = {
		"hylee", "taelee", "jehong", "daelee",
		"yeha", "kukim", "yeosong", "secho",
		"gaekim", "mihykim", "sancho", "jakang"
	};
	Zombie zombie(names[rand() % 12], this->type);
	zombie.announce();
	
}