/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:00:05 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 17:13:40 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponName) : _name(name), _weapon(weaponName) { }

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}