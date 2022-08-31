/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:00:24 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 20:58:29 by mki              ###   ########.fr       */
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

void	Zombie::announce() {
	std::cout <<
	"<" << _name << ">  BraiiiiiiinnnzzzZ..."
	<< std::endl;
}
