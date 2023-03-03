/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:03:57 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 21:04:52 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "Zombie.hpp"

Zombie	*newZombie( std::string name);
Zombie	*zombieHorde( int N, std::string name);
void	randomChump( std::string name);

#endif