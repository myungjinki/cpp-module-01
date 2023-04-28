/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 22:25:26 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 21:59:40 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name) {
	_horde = new Zombie*[5];
	for (int i = 0; i < N; i++) {
		_horde[i] = newZombie(name);
	}
	return (*_horde);
}
