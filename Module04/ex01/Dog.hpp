/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/16 19:42:42 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP
# define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal, public Brain{
	private:
		Brain *_brain;
	protected:
		std::string __type;
	public:
		Dog( void );
		Dog( Animal const & copy);
		~Dog( void );
		Dog & operator = (Dog const & rhs);
		std::string getType( void ) const ;
		void makeSound( void )const ;
};

#endif