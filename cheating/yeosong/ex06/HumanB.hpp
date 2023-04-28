/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:00:52 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 17:13:31 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string 	_name;
		Weapon		 *_weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weaponName);
		void attack();		
};

#endif