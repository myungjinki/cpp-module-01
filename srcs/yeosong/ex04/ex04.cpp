/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 21:17:46 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 21:17:48 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	
    std::cout << "print str" << std::endl;
    std::cout << str << std::endl << std::endl;
    
    std::cout << "print pointer (*ptr = &str)" << std::endl;
    std::cout << *ptr << std::endl << std::endl;
    
    std::cout << "print reference (&ref = str)" << std::endl;
    std::cout << ref << std::endl;
}	