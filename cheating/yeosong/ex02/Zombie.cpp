/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:39:41 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 18:00:44 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::Zombie()
{
	this->name = "nobody";
	this->type = "basic";
}

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>";
    std::cout << "\033[0;31m  Braiiiiiiinnnssss...\033[0m" << std::endl;
}