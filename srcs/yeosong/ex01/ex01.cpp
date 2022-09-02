/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:20:48 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 20:28:27 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak(void)
{
    std::string *panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}

void memoryLeak2(void)
{
    std::string panther = std::string("String panther2");
    std::cout << panther << std::endl;
}

int     main(void)
{
    memoryLeak();
    memoryLeak2();
    system("leaks a.out > leaks_result_temp; cat leaks_result_temp \
    | grep leaked && rm -rf leaks_result_temp");
}