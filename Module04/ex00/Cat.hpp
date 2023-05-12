/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:28:29 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 18:44:46 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
# define _CAT_HPP

#include <iostream>
#include "Animal.hpp" 

class Cat :public Animal {
	protected:
		std::string __type;
	public:
		Cat( void );
		Cat( std::string name);
		~Cat( void );
		std::string getType( void ) const ;
		void makeSound ( void ) const;
};

#endif