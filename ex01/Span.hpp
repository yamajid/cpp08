/* ************************************************************************** */
/*                                                                            */
/*                                    l00                    :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:07 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/15 02:28:09 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span {
    private:
        std::vector<int> array;
        std::vector<int>::iterator index;
        Span();  
    public:
        ~Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span& operator=(Span const & src);
        void addNumber(int number);
        size_t shortestSpan();
        size_t longestSpan();
        void thousands_calls();
        friend std::ostream&   operator<<(std::ostream& os, Span& rhs );
};

