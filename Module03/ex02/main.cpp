/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:05:01 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/10 21:01:31 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	ClapTrap Earth = ClapTrap("Earth");
	ClapTrap Pun = ClapTrap("Pun");

	Earth.attack("Pun");
	Pun.takeDamage(1);

	ScavTrap Nii("Nii"); 
	ScavTrap Mayme("Mayme");
	Nii.attack("Mayme");
	Mayme.takeDamage(Nii.getATK());
	Mayme.beRepaired(15);
	std::cout << Mayme.getName() << " has " << Mayme.getHP() << " HP and has EP " << Mayme.getEP() << " points." << std::endl;
	std::cout << Nii.getName() << " has " << Nii.getHP() << " HP and has EP " << Nii.getEP() << " points." << std::endl;
	Nii.guardGate();

	FragTrap Pon("Pon");
	FragTrap Muay("Muay");
	Pon.attack("Muay");
	Muay.takeDamage(Pon.getATK());
	std::cout << Muay.getName() << " has " << Muay.getHP() << " HP and has EP " << Muay.getEP() << " points." << std::endl;
	std::cout << Pon.getName() << " has " << Pon.getHP() << " HP and has EP " << Pon.getEP() << " points." << std::endl;
	Pon.highFivesGuys();
}