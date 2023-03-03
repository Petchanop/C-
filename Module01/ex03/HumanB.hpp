/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:19:11 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 01:06:10 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB{
	private:
		std::string _name;
		Weapon* weapon;
	public:
		HumanB( void );
		HumanB( std::string name);
		~HumanB( void );
		void setWeapon(Weapon& weapon);
		void attack( void );
};

#endif