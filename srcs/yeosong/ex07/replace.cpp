/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:17:36 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/29 21:08:44 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

int check_argument_num(int argc)
{
	if (argc != 4)
	{
		std::cout << "💥 Error -- Input Format: ./program FILENAME, s1, s2" << std::endl;;
		return (0);
	}
	return (1);
}

int check_argument_value(std::string &s1, std::string &s2, char **argv)
{
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);
	if (s1.empty() || s2.empty())
	{
		std::cout << "💥 Error -- s1 and s2 is NOT supposed to be empty." << std::endl;
		return(0);
	}
	return (1);
}

int check_file(std::fstream &read_file, std::fstream &write_file, char *file)
{
	std::string fileReplaced = std::string(file).append(".replace");
	
	// file open : "path/file"
	read_file.open(file, std::fstream::in);
	if (read_file.fail())
	{
		std::cout << "💥 Error -- Failed to open the file" << std::endl;
		return (0);
	}
	// file save : "name" 
	write_file.open(fileReplaced.c_str(), std::fstream::out | std::fstream::trunc); // 이부분 설명 필요
	if (write_file.fail())
	{
		read_file.close();
		std::cout << "💥 Error -- Failed to save the file" << std::endl;
		return (0);
	}
	return (1);
}

std::string &replaceInline(std::string &line, std::string s1, std::string s2)
{
	std::string::size_type pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos) // 못찾으면 npos 반환, 찾으면 찾는 문자열의 첫번째 인덱스 반환.
	{
		line.replace(pos, s1.length(), s2); // 찾은 문자열 위치부터 s1 길이만큼의 문자를 s2로 치환 012345 012zzz45 니까
		pos += s2.length();					// s2의 길이만큼 그 다음에서부터 다시 검색한다.
	}
	return (line);
}

int main(int argc, char **argv)
{
	std::string		s1;
	std::string		s2;
	std::fstream	read_file;
	std::fstream	write_file;
	std::string		line;
	
	if (!check_argument_num(argc))
		return (1);
	if (!check_argument_value(s1, s2, argv))
		return (1);
	if (!check_file(read_file, write_file, argv[1]))
		return (1);

	while (std::getline(read_file, line))
	{
		std::string res = replaceInline(line, s1, s2);
		write_file << res;
		if (!read_file.eof())
			write_file << std::endl;
	}
	
	read_file.close();
	write_file.close();
	return (0);
}