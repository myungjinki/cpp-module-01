/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:36:31 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 17:50:02 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {	
    public:
        Zombie(std::string name, std::string type);
        Zombie();
		~Zombie();
        void    announce(void);

    private: 
        std::string type;
        std::string name;
};
#endif