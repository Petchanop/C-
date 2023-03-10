/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:28:32 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 22:22:25 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout<< this->_name << " " << "has been destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump( std::string name )
{
	Zombie chump = Zombie(name);
	chump.announce();
}

Zombie	*newZombie( std::string name ){
	Zombie *newZombie = new Zombie( name );
	return (newZombie);
}