/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/16 20:14:44 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>
# include <sys/time.h>
# include <algorithm>
# include <iterator>

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

template <class T>
class PmergeMe {
	private:
		T	_seq;
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

		void sortPairInput(size_t start, size_t end){
			unsigned int mid = start + (end - start) / 2;
			if (start < end) {
				typename T::iterator it2 = this->_seq.begin() + mid;
				for (typename T::iterator it1 = this->_seq.begin() + start; it1 != this->_seq.begin() + mid; it1++){
					if (*it1 > *it2){
						std::iter_swap(it2, it1);
					}
					it2++;
				}
			}
		}

		void	insertPartition(int start, int end){
			for (int i = start; i <= end; i++){
				int num = _seq[i];
				int pre = i - 1;
				while (pre >= start && _seq[pre] > num){
					_seq[pre + 1] = _seq[pre];
					pre--;
				}
				_seq[pre + 1] = num;
			}
		}

		void mergePartition(int start, int nend){
			int mid = start + (nend - start) / 2;
			if (_seq[mid] <= _seq[mid + 1])
				return ;
			int i = start;
			int j = mid + 1;
			while (i <= mid && j <= nend){
				if (_seq[i] <= _seq[j])
					i++;
				else {
					std::rotate(_seq.begin() + i, _seq.begin() + j, _seq.begin() + j + 1);
					i++;
					mid++;
					j++;
				}
			}
		}

		void printSort(size_t start, size_t end, std::string color1, std::string color2, std::string msg){
			std::cout << WHT;
			std::cout << color1 << msg;
			std::cout << "seq	: ";
			for (unsigned int i = start; i < (start + end) / 2; i++){
				std::cout << _seq[i] << " ";
			}
			std::cout << std::endl;
			std::cout << "remain  : ";
			for (unsigned int i = (start + end) / 2; i < (end); i++){
				std::cout << _seq[i] << " ";
			}
			std::cout << WHT << std::endl;
			std::cout << color2 << "container : ";
			for (unsigned int i = 0; i < _seq.size(); i++){
				std::cout << _seq[i] << " ";
			}
			std::cout << WHT << std::endl;
		}

		void mergeInsertionSort(int start, int end){
			if (start < end){
				int mid = start + (end - start) / 2;
				this->sortPairInput(start, end);
				this->mergeInsertionSort(start, mid);
				this->mergeInsertionSort(mid + 1, end);
				this->insertPartition(start, mid);
				this->insertPartition(mid + 1, end);
				this->mergePartition(start, end);
			}
		}

		void printProcessingTime(void (PmergeMe::*func)(int , int), PmergeMe &obj, std::string container, std::string color){
			struct timeval	tvStart, tvStop;
			gettimeofday(&tvStart, 0);
			(obj.*func)(0, obj.getSequence().size() - 1);
			gettimeofday(&tvStop, 0);
			std::cout << color << "after sort : ";
			for (unsigned int i = 0; i < obj.getSequence().size(); i++){
				std::cout << obj.getSequence()[i] << " ";
			}
			std::cout << WHT << std::endl;
			std::cout << "Time to process a range of ";
			std::cout << this->getSequence().size() << " elements with " << container << " " << (tvStop.tv_sec - tvStart.tv_sec) * 1000000L + tvStop.tv_usec - tvStart.tv_usec;
			std::cout << " us" << std::endl;
		}
};

#endif
