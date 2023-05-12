/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:21:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:59:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP
# define _ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal : public Brain {
	protected:
		std::string __type;
	public:
		Animal( void );
		Animal(Animal const & copy);
		virtual ~Animal( void );
		Animal & operator = (Animal const & rhs);
		virtual std::string getType( void ) const ;
		virtual void makeSound( void ) const = 0;
};

#endif