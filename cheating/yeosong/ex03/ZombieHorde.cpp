/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:45:05 by kukim             #+#    #+#             */
/*   Updated: 2021/01/28 23:31:48 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie ZombieHorde::get_random_zombie(std::string type)
{
	std::string names[] = {
		"yeha", "kukim", "yeosong", "secho",
		"hylee", "taelee", "jehong", "daelee",
		"gaekim", "mihykim", "sancho", "jakang"
	};
	return (Zombie(names[rand() % 12], type));
}

ZombieHorde::ZombieHorde(int N)
{
	srand(time(NULL));
	this->N = N;
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i] = get_random_zombie("Horde");
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
	std::cout << "Destructor said: ";
	std::cout << "All zombies died." << std::endl;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->N; i++)
		zombies[i].announce();
}
