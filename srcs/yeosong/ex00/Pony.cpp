/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:09:01 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 20:45:40 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {

    std::cout << "Pony's constructor start" << std::endl;
    return;
}

Pony::~Pony(void) {

    std::cout << "Pony's destructor start" << std::endl;
    return;
}

void Pony::test() {
    this->p2 = new Pony("Pony in Heap2");
}