/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:08:57 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 16:26:22 by npiya-is         ###   ########.fr       */
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
		~ClapTrap ( void );
		ClapTrap & operator = (ClapTrap const & r);
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

#endif