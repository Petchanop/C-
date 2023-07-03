/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/04 03:00:44 by npiya-is         ###   ########.fr       */
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
# include <iterator>

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
		T getSequence() {
			return this->_seq;
		}
		T getRemaining() {
			return this->_remain;
		}

		bool addInput(int argc, char *argv[]){
			std::istringstream input;
			int	data;
			for (int i = 1; i < argc; i++){
				input.str(argv[i]);
				input >> data;
				if (atoi(argv[i]) != data) {
					return false;
				}
				this->_seq.push_back(data);
				input.clear();
			}
			return true;
		}
		void groupInput(void){
			// typename T::iterator it = this->_seq.begin();
			this->_remain.insert(this->_remain.begin(), this->_seq.begin() + (this->_seq.size() / 2), this->_seq.end());
			this->_seq.erase(this->_seq.begin() + (this->_seq.size() / 2), this->_seq.end());
			std::cout << "seq : ";
			for (unsigned int i = 0; i < this->_seq.size(); i++){
				std::cout << this->_seq[i] << " ";
			}
			std::cout << std::endl;
			std::cout << "remain : ";
			for (unsigned int i = 0; i < this->_remain.size(); i++){
				std::cout << this->_remain[i] << " ";
			}
			std::cout << std::endl;
		}

		void sortPairInput(void){
			typename T::iterator it2 = this->_remain.begin();
			for (typename T::iterator it1 = this->_seq.begin(); it1 != this->_seq.end(); it1++){
				if (*it1 > *it2)
					std::iter_swap(it1, it2);
				it2++;
			}
			std::cout << "After swap\n";
			std::cout << "seq : ";
			for (unsigned int i = 0; i < this->_seq.size(); i++){
				std::cout << this->_seq[i] << " ";
			}
			std::cout << std::endl;
			std::cout << "remain : ";
			for (unsigned int i = 0; i < this->_remain.size(); i++){
				std::cout << this->_remain[i] << " ";
			}
			std::cout << std::endl;
		}
};

#endif
