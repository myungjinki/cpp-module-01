/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:33:07 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 21:33:58 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
// void test(ZombieEvent event)
// {
// 	event.setZombieType("fast");
// 	Zombie *powerZombie = event.newZombie("powerZombie");
// 	powerZombie->announce();
// //	delete(powerZombie);

// }

int main(void)
{
	// Zombie Class : Stack
	Zombie chasingman("yeosong", "almost human");
	chasingman.announce();
	
	Zombie basicZ;
	basicZ.announce();

	// ZombieEvent Class
	ZombieEvent event;
	event.setZombieType("fast");

	//	Zombie Class : Heap
	Zombie *powerZombie = event.newZombie("powerZombie");
	powerZombie->announce();
	delete(powerZombie);

	event.setZombieType("slow");
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();

	system("leaks a.out > leaks_result_temp; cat leaks_result_temp \
    | grep leaked && rm -rf leaks_result_temp");
}