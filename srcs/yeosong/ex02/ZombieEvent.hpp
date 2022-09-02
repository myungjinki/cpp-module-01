/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:39:27 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 21:10:15 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class ZombieEvent 
{
    public:
		ZombieEvent();
		~ZombieEvent();
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void    randomChump();
    private:
        std::string type;
};

#endif