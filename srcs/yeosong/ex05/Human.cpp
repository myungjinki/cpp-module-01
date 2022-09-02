/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 23:32:51 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 12:38:52 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify()
{
	return (brain.identify());
}

const Brain& Human::getBrain()
{
	return (brain);
}