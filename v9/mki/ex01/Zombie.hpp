/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:24:56 by mki               #+#    #+#             */
/*   Updated: 2021/07/05 21:59:41 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string	_name;
		Zombie		**_horde;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie	**getHorde();
		void	announce();
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		Zombie	*zombieHorde(int N, std::string name);
};

#endif
