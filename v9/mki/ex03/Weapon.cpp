/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:33:33 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 15:45:05 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): type(t){}

const std::string	&Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string t)
{
	type = t;
}
