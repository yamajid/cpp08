/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:09 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/14 03:02:51 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ostream>
#include <stdexcept>
#include <vector>

Span::Span(unsigned int n){

    array.resize(n, 0);
    index = array.begin();
}

Span::~Span() {
}

Span::Span(Span const & src){
    *this = src; 
}

Span& Span::operator=(Span const & src){
    if (this != &src) {
        this->array = src.array;
        index = array.begin() + (src.index - src.array.begin());
    }
    return *this;
}

void Span::addNumber(int number){
    if (index == array.end())
        throw std::runtime_error("out of range");
    *index = number;
    index++;
}


void Span::longestSpan(){
    if (index == array.end())
        throw std::runtime_error("no span can be found");
    for ()
}

std::ostream&   operator<<(std::ostream& os, Span& rhs ) {
    std::vector<int>::iterator it = rhs.array.begin();
    while (it != rhs.index) {
        os << *it << " ";
        it++;
    }
    return os;
}