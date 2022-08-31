/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:25:21 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 16:35:07 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie		zombie;
	Zombie		*zombies;
	const int	zombieCnt = 5;
	
	zombie.announce();
	zombies = zombie.zombieHorde(zombieCnt, "Horde");
	for (int i = 0; i < zombieCnt; i++) {
		(zombies + i)->announce();
	}
	for (int i = 0; i < zombieCnt; i++) {
		delete (zombies + i);
	}
	delete zombie.getHorde();
	return (0);
}
