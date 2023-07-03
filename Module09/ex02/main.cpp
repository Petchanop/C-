/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/03 17:57:34 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]){
	if (argc > 1){
		PmergeMe<std::vector<int> > bb;
		bb.addInput(argc, argv);
		for (std::vector<int>::iterator it = bb.getSequence().begin(); it != bb.getSequence().end(); it++) {
			std::cout << *it << std::endl;
		}
	}
}
