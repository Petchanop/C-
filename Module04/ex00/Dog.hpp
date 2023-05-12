/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/13 17:07:32 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP
# define _DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog:public Animal {
	protected:
		std::string __type;
	public:
		Dog( void );
		Dog( std::string );
		~Dog( void );
		std::string getType( void ) const ;
		void makeSound( void )const ;
};

#endif