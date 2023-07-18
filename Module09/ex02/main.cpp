/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/18 14:26:54 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <list>
#include <deque>

template<typename T>
bool checkSort(T container){
	bool ret = true;
	int count = 0;
	std::cout << WHT << "Check wrong index : " << RED;
	for (unsigned int i = 0; i < container.size(); i++){
		for (unsigned int j = i; j < container.size(); j++){
			if (container[i] > container[j]){
				std::cout << "index : " << i << "," << j << " " << container[i] << "," << container[j] << " ";
				// return false;
				count++;
				ret = false;
			}
		}
	}
	std::cout << std::endl;
	if (!ret)
		std::cout << "sort wrong " << count << std::endl;
	return ret;
}

int main(int argc, char *argv[]){
	if (argc > 1){
		PmergeMe<std::vector<int> > bb;
		std::vector<int> Result;
		if (bb.addInput(argc, argv)){
			std::cout << CYN << "before : ";
			for (unsigned int i = 0; i < bb.getSequence().size(); i++){
				std::cout << bb.getSequence()[i] << " ";
			}
			std::cout << std::endl;
			unsigned int timeVec = bb.printProcessingTime(&PmergeMe<std::vector<int> >::mergeInsertionSort, bb);
			std::cout << MAG << "after : ";
			for (unsigned int i = 0; i < bb.getSequence().size(); i++){
				std::cout << bb.getSequence()[i] << " ";
			}
			std::cout << WHT << std::endl;
			std::cout << "Time to process a range of ";
			std::cout << bb.getSequence().size() << " elements with vector " << timeVec << " us\n";
		}
		if (checkSort(bb.getSequence()))
			std::cout << GRN << "true" << std::endl;
		else
			std::cout << RED << "false" << std::endl;
		std::cout << WHT << "=================================================================" << std::endl;
		PmergeMe<std::deque<int> > tt;
		if (tt.addInput(argc, argv)){
			unsigned int timeDeq = tt.printProcessingTime(&PmergeMe<std::deque<int> >::mergeInsertionSort, tt);
			std::cout << "Time to process a range of ";
			std::cout << tt.getSequence().size() << " elements with Deque " << timeDeq << " us\n";
		}
		if (checkSort(tt.getSequence()))
			std::cout << MAG << "true" << std::endl;
		else
			std::cout << RED << "false" << std::endl;

	}
}

// ./PmergeMe `jot -r 3000 1 1000 | tr '\n' ' '`
