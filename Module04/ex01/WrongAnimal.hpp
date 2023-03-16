/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:09:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/13 17:12:02 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP
# define _WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string __type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string name );
		~WrongAnimal( void );
		std::string getType( void );
		void makeSound( void );
};

#endif