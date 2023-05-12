/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:23:35 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:00:37 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP
# define _WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type);
		~WrongAnimal( void );
		WrongAnimal & operator = (WrongAnimal const & rhs);
		std::string getType( void )const;
		void makeSound( void )const;
};

#endif