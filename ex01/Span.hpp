/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:07 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/14 02:57:23 by yamajid          ###   ########.fr       */
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
        void shorttestSpan();
        void longestSpan();
        friend std::ostream&   operator<<(std::ostream& os, Span& rhs );
};

