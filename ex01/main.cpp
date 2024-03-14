/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:12 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/14 02:56:32 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <ostream>

int main()
{
    try {

        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(9);
        Span sp2 = sp;
        std::cout << sp2 << std::endl;
        sp2.addNumber(11);
        std::cout << sp2 << std::endl;
        
        std::cout << sp << std::endl;
        
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}