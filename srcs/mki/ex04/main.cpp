/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:24:10 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 16:13:24 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Wrong Argument" << std::endl;
	}
	else {
		std::string			filename = argv[1];
		const std::string	s1 = argv[2];
		const std::string	s2 = argv[3];
		Replace	r;
		
		if (!r.open(filename)) {
			r.touch(filename.append(".replace"));
			r.replace(s2, s1);
		}
		else {
			std::cout << "WRONG" << std::endl;
		}
	}
	return (0);
}
