/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:26:25 by mki               #+#    #+#             */
/*   Updated: 2021/07/09 16:30:13 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	&Replace::getFilename() {
	return _filename;
}

int	Replace::open(const std::string &filename) {
	_fin.open(filename);
	return (_fin.fail());
}

void	ft_replace(std::string &tmp, int start, const std::string &s2, const std::string &s1) {
	tmp = tmp.substr(0, start) + s2 + &tmp[start + s1.length()];
}

int	Replace::replace(const std::string &s2, const std::string &s1) {
	std::string	tmp;
	int			start_pos;

	while (!_fin.eof()) {
		start_pos = 0;
		getline(_fin, tmp);
		while ((start_pos = tmp.find(s1, start_pos)) != (int)std::string::npos) {
			ft_replace(tmp, start_pos, s2, s1);
			start_pos += s2.length();
		}
		_fout << tmp;
		if (!_fin.eof()) {
			_fout << std::endl;
		}
	}
	return (0);
}

int	Replace::touch(const std::string &filename) {
	_fout.open(filename);
	return (_fout.fail());
}
