/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:55:33 by mki               #+#    #+#             */
/*   Updated: 2021/08/06 14:19:45 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]\n"
              << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n"
              << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]\n"
              << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!\n"
              << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n"
              << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable, I want to speak to the manager now.\n"
              << std::endl;
}

void Karen::wrong(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]\n"
              << std::endl;
}

int indexLevel(std::string level)
{
    std::string comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    for (i = 0; i < 4; i++)
    {
        if (comments[i] == level)
        {
            return (i);
        }
    }
    return (i);
}

void Karen::complain(std::string level)
{
    int idx = indexLevel(level);
    FuncPtr funcptr[5] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::wrong};
    FuncPtr func = funcptr[idx];
    (this->*func)();
}
