/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 20:06:35 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP
# define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
	private:
		Brain *_brain;
	protected:
		std::string __type;
	public:
		Dog( void );
		Dog( Dog const & copy);
		~Dog( void );
		Dog & operator = (Dog const & rhs);
		std::string getType( void ) const ;
		void makeSound( void )const ;
		Brain * getBrain( void ) const;
};

#endif