/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:26:28 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 16:12:47 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
private:
	std::string		_filename;
	std::ifstream	_fin;
	std::ofstream	_fout;
public:
	std::string	&getFilename();
	int			open(const std::string &filename);
	int			replace(const std::string &s2, const std::string &s1);
	int			touch(const std::string &filename);
};

#endif
