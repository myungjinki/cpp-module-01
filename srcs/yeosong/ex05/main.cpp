/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 23:32:58 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 12:43:35 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human		 bob;
	
	std::cout << "identify" << std::endl;
    std::cout << std::setw(20)<< bob.identify() << std::endl << std::endl;
	
	std::cout << "getBrain.identify" << std::endl;
    std::cout << std::setw(20) << bob.getBrain().identify() << std::endl;
}