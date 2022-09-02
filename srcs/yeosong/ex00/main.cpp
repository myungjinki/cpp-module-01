/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:09:16 by yeosong           #+#    #+#             */
/*   Updated: 2021/01/28 22:20:24 by yeosong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
    Pony *pony = new Pony("Pony in Heap");
    std::cout << "\"I am a Pony in the Heap\"" << std::endl;
    std::cout << "Now delete Pony created on heap" << std::endl;
    delete pony;
}

void ponyOnTheStack(void) {
    Pony pony = Pony("Pony in Stack");
    std::cout << "\"I am a Pony in the Stack\"" << std::endl;
}

int main() {
    std::cout << "Call ponyOnTheHeap" << std::endl;
    ponyOnTheHeap();
    std::cout << "ponyOnTheHeap finished" << std::endl << std::endl;
    
    std::cout << "Call ponyOnTheStack" << std::endl;
    ponyOnTheStack();
    std::cout << "ponyOnTheStack finished" << std::endl << std::endl;
    
    // Pony *tt = new Pony("tet");              new를 가리키는 포인터가 메인문 안에있으면
    // std::cout << "1" << std::endl;           delete 없어도 릭이 안떠.. 소멸자도 호출 안됨....
    // tt->test();                              왜 이러는지 아시는분..
    //     if (tt->p2)
    //         std::cout << "2" << std::endl;

    system("leaks house > leaks_result_temp; cat leaks_result_temp \
    | grep leaked && rm -rf leaks_result_temp");
    return (0);
}
