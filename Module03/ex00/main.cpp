/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:05:01 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/09 16:11:00 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap Earth = ClapTrap("Earth");
	ClapTrap Pun = ClapTrap("Pun");

	Earth.attack("Pun");
	Pun.takeDamage(1);
}