/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:58:34 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 18:28:12 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1 = Zombie("niinoi");
	zombie1.announce();
	Zombie *zomptr = newZombie("niiPtr");
	zomptr->announce();
	delete zomptr;
	randomChump("randomnii");
}