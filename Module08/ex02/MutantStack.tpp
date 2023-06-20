/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:02:39 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/20 16:10:29 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.h"

template<typename T, class Container>
MutantStack<T, Container>::MutantStack(){};

template<typename T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack<T, Container> const & rhs){
	*this = rhs;
}

template<typename T, class Container>
MutantStack<T, Container>::~MutantStack(){};

template<typename T, class Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack<T, Container> const & rhs)
{
	std::stack<T, Container>::operator=(rhs);
	return *this;
}

#endif
