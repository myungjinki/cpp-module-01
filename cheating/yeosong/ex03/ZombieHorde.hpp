/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:45:14 by kukim             #+#    #+#             */
/*   Updated: 2021/01/28 21:01:56 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieHorde {
    private:
		int N;
		Zombie *zombies;
		Zombie get_random_zombie(std::string type);

    public:
		ZombieHorde(int N);
		~ZombieHorde();
		void announce();
};

#endif