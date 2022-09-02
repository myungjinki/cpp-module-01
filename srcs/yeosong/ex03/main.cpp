/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:50:50 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 21:14:04 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	// ZombieHorde -> Created random Zombie N
	ZombieHorde zombie = ZombieHorde(10);

	// N Zombie barking : Braiiiiiiinnnssss....
	zombie.announce();

	system("leaks a.out > leaks_result_temp; cat leaks_result_temp \
    | grep leaked && rm -rf leaks_result_temp");
}