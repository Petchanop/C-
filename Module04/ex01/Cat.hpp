/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:28:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:54:54 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
# define _CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp" 

class Cat :public Animal{
	private:
		Brain *_brain;
	protected:
		std::string __type;
	public:
		Cat( void );
		Cat(Cat const & copy);
		const Cat & operator = (Cat const & rhs);
		virtual ~Cat( void );
		std::string getType( void ) const ;
		void makeSound ( void ) const;
		Brain * getBrain( void ) const;
};

#endif