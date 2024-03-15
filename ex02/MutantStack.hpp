/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:07:08 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/15 20:44:36 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template <typename T, typename C = std::deque<T> >
class MutantStack: public std::stack<T, C>{
     public :
        typedef typename std::stack<T, C>::container_type::iterator iterator;

        iterator begin(){
            return this->c.begin();
        }

        iterator end(){
            return this->c.end();
        }
                
        MutantStack(){
            
        }
            
        MutantStack<T>&  operator=(const MutantStack<T>& obj){
            if (this != &obj)
                this->c = obj.c;
            return *this;
        }
        MutantStack(const MutantStack<T>& other): std::stack<T, C>(other){
            *this = other;
        }     
        ~MutantStack(){
        }
};
