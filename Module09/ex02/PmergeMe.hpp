/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/02 22:51:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <sys/time.h>
# include <algorithm>
# include <vector>
# include <list>

template <class T>
class PmergeMe {
	private:
		T	_seq;
		T	_remain;
	public:
		PmergeMe( void ){};
		PmergeMe(PmergeMe const & copy){
			*this = copy;
		};
		~PmergeMe( void ){};
		PmergeMe & operator=(PmergeMe const &rhs){
			if (this != &rhs){
				*this = rhs;
			}
			return *this;
		}
		bool addInput(int argc, char *argv[]){
			std::isstringstream input;
			int	data;
			for (int i = 1; i < argc; i++){
				input = argv[i];
				input << data;
				if (atoi(argv[i] != data)) {
					return false;
				}
				this->_seq.push_back(data);
			}
			return true;
		}
		void groupInput(void){

		}


};

#endif
