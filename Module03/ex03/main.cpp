/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:05:01 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/11 00:13:55 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	DiamondTrap opal("Opal");
	DiamondTrap NPetch("N'Petch");
	opal.attack("N'Petch");
	NPetch.FragTrap::takeDamage(opal.FragTrap::getATK());
	std::cout << NPetch.getName() << " has " << NPetch.FragTrap::getHP() << " HP and has EP " << NPetch.ScavTrap::getEP() << " points." << std::endl;
	std::cout << opal.getName() << " has " << opal.FragTrap::getHP() << " HP and has EP " << opal.ScavTrap::getEP() << " points." << std::endl;
	opal.whoAmI();
}