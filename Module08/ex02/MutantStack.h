/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:36:50 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/20 16:10:47 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>

template<typename T, class Container=std::deque<T> >
class MutantStack: public std::stack<T, Container> {
	using std::stack<T, Container>::c;
	public:
		MutantStack();
		MutantStack(MutantStack const & rhs);
		~MutantStack();
		MutantStack & operator=(MutantStack const & rhs);
		typedef typename Container::iterator	iterator;
		iterator begin(){return this->c.begin();};
		iterator end(){return this->c.end();};
};

#include "MutantStack.tpp"

#endif
