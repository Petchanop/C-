/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:26:27 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 22:29:01 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		void announce( void );
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void setZombiename( std::string name);
		// Zombie	*newZombie( std::string name);
};

Zombie	*newZombie( std::string name);
void	randomChump( std::string name);
#endif