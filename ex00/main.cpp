/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:55:43 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/13 16:10:08 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main ()
{
    try {
        std::vector<int> arr(10, 1);
        for (size_t i = 0; i < 10; i++) {
            arr[i] = i * 2;
        }
        std::vector<int>::iterator ans = easyfind(arr, 100);
        std::cout << *ans << std::endl;
        
    }
    catch (std::exception & e) {
        std::cout << "Element Not Found" << std::endl;
    }
}