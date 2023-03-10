/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:08:57 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 21:30:43 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	_name;
		int	_HP;
		int	_EP;
		int			_Atk;
	public:
		ClapTrap ( void );
		ClapTrap (std::string name);
		ClapTrap (ClapTrap const & copy);
		ClapTrap (std::string name, int hp, int ep, int atk);
		~ClapTrap ( void );
		ClapTrap & operator = (ClapTrap const & r);
		std::string getName( void );
		int getHP( void );
		int getEP( void );
		int getATK( void );
		void setName( std::string name );
		void setHP( unsigned int amount );
		void setEP( unsigned int amount );
		void setATK( unsigned int amount );
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void energyUse(unsigned int amount);
};

#endif