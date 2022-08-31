/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:55:37 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 15:32:31 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen   karen;

	if (argc == 1) {
		karen.complain("wrong");
	}
	else {
		karen.complain(argv[1]);
	}
	return (0);
}
