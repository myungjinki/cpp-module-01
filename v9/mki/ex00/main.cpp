/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:25:21 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 20:58:32 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	makeZombie()
{
	Zombie	zombie;

	zombie.announce();
	zombie.randomChump("Heap");
}

int		main() {
	makeZombie();
	return (0);
}
