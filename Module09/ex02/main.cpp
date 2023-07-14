/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:00 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/14 15:58:38 by npiya-is         ###   ########.fr       */
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
			bb.mergeInsertionSort(0, bb.getSequence().size());
			std::cout << MAG << "after : ";
			for (unsigned int i = 0; i < bb.getSequence().size(); i++){
				std::cout << bb.getSequence()[i] << " ";
			}
			std::cout << WHT << std::endl;
		}
		// if (checkSort(bb.getSequence()))
		// 	std::cout << GRN << "true" << std::endl;
		// else
		// 	std::cout << RED << "false" << std::endl;
		std::cout << WHT << "=================================================================" << std::endl;
		PmergeMe<std::deque<int> > tt;
		if (tt.addInput(argc, argv)){
			std::cout << CYN << "before : ";
			for (unsigned int i = 0; i < tt.getSequence().size(); i++){
				std::cout << tt.getSequence()[i] << " ";
			}
			std::cout << std::endl;
			tt.mergeInsertionSort(0, tt.getSequence().size() - 1);
			std::cout << YEL << "after sort : ";
			for (unsigned int i = 0; i < tt.getSequence().size(); i++){
				std::cout << tt.getSequence()[i] << " ";
			}
			std::cout << std::endl;
		}
		if (checkSort(tt.getSequence()))
			std::cout << MAG << "true" << std::endl;
		else
			std::cout << RED << "false" << std::endl;
	}
}

// ./PmergeMe `jot -r 3000 1 1000 | tr '\n' ' '`
