/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 22:01:36 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 15:50:29 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	Print(const std::string *ptr)
{
	std::cout << "Pointer" << std::endl;
	std::cout << *ptr << std::endl;
}

void	Print(const std::string &ref)
{
	std::cout << "Reference" << std::endl;
	std::cout << ref << std::endl;
}

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	Print(stringPTR);
	Print(stringREF);
	return 0;
}
