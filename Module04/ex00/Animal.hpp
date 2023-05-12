/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:21:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/13 16:08:25 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP
# define _ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string __type;
	public:
		Animal( void );
		~Animal( void );
		Animal & operator = (Animal const & rhs);
		virtual std::string getType( void ) const ;
		virtual void makeSound( void ) const;
};

#endif