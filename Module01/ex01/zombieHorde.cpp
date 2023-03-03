/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:47:39 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 22:26:47 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N;i++){
		horde[i].setZombiename(name); 	
	}
	return ( horde );
}