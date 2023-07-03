/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/04 03:00:28 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]){
	if (argc > 1){
		PmergeMe<std::vector<int> > bb;
		if (bb.addInput(argc, argv)){
			bb.groupInput();
			bb.sortPairInput();
		}
	}
}
