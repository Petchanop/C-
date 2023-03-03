/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:56:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 00:42:25 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		std::string const& getType( void );
		void setType(std::string type);
};

#endif