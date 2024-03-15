/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:04:09 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/15 02:34:32 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
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
    std::sort(array.begin(), index);
}

size_t Span::longestSpan(){
    if (array.size() < 2)
        throw std::runtime_error("no span can be found");
    return *(index - 1) - *array.begin();
}

size_t Span::shortestSpan(){
    int value = 0;
    
    if (array.size() < 2)
        throw std::runtime_error("no span can be found");
    std::vector<int>::iterator i = array.begin();
    value = *(i + 1) - *i;
    i += 1;
    while (i != (index - 1)){
        if (*(i + 1) - *i < value){
            value = *(i + 1) - *i;
        }
        i++;
    }
    return value;
}

void Span::thousands_calls(){
    std::srand(time(0));
    for(size_t i = 0; i < array.size(); i++)
        addNumber(10 + std::rand() % (50 - 10 + 1));
}

std::ostream&   operator<<(std::ostream& os, Span& rhs ) {
    std::vector<int>::iterator it = rhs.array.begin();
    while (it != rhs.index) {
        os << *it << std::endl;
        it++;
    }
    return os;
}