/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:12 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/15 02:35:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <ostream>

int main()
{
    try {

        Span sp = Span(10);
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        sp.thousands_calls();
         sp.longestSpan();
        std::cout << sp << std::endl;
        return 0;
        
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}