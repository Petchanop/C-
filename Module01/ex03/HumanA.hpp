/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:12:13 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/04 01:05:51 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private:
		std::string _name;
		Weapon*	weapon;
	public:
		HumanA( void );
		HumanA( std::string name, Weapon& weapon);
		~HumanA( void );
		void attack( void );
};

#endif