/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 23:32:32 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 16:26:00 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	// created stringstream addr
	std::stringstream addr;
	std::string add = "0x";
	
	// addr <- Object memory Address : this 
	addr << std::hex << std::uppercase << (unsigned long)this;

	// convert pointer to string
	add.append(addr.str());
	return (add);
}