/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:41:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/04/13 19:00:31 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP
# define _WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongCat( void );
		WrongCat( std::string name);
		~WrongCat(void );
		std::string getType( void )const;
		void makeSound( void )const;
};

#endif