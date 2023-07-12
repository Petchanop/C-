/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:05:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/07/13 01:01:52 by npiya-is         ###   ########.fr       */
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

		void sortPairInput(size_t start, size_t end){
			typename T::iterator it2;
			int nend;
			if (end == this->_seq.size())
				nend = end;
			else
				nend = end + 1;
			if (start < end) {
				typename T::iterator it2 = this->_seq.begin() + ((start + end) / 2);
				for (typename T::iterator it1 = this->_seq.begin() + start; it1 != this->_seq.begin() + ((start + end) / 2); it1++){
					if (*it1 > *it2){
						std::iter_swap(it2, it1);
					}
					it2++;
				}
			}
		}

		int	findPositionInsert(int num, int j, int end){
			int k = j;
			while (k < end){
				if (num > _seq[k])
					k++;
				else
					break ;
			}
			return k - 1;
		}

		void	partitionSwap(size_t start, size_t end){
			unsigned int nend;
			if (end == this->_seq.size())
				nend = end;
			else
				nend = end + 1;
			// this->printSort(start, nend, YEL, YEL, "Before Partition start\n");
			// std::cout << start << " to " << (start + nend) / 2 << "\n";
			for (unsigned int i = start; i != (start + nend) / 2; i++){
				for (unsigned int j = start; j != (start + nend) / 2; j++){
					if ( _seq[i] > _seq[j] && i < j){
						//optimize use search to find consequence of j index which lower than i index
						// std::cout << "before _seq[i]: " << i << "," << _seq[i] <<  " _seq[j]: " << j << ",\n";//<< _seq[j] << std::endl;
						unsigned int l = i;
						int num = _seq[i];
						unsigned int k = this->findPositionInsert(num, j, (start + nend) / 2);
						// std::cout << "sort at index :" << k << std::endl;
						while (i < k){
							int tmp1 = _seq[i + 1];
							_seq[i + 1] = num;
							_seq[i] = tmp1;
							i++;
						}
						i = l;
						j--;
						// std::cout << "after _seq[i]: " << i << "," << _seq[i] << std::endl;
					}
				}
			}
			for (unsigned int i = (start + nend) / 2; i != nend; i++){
				for (unsigned int j = (start + nend) / 2; j != nend; j++){
					if ( _seq[i] > _seq[j] && i < j){
						//optimize use search to find consequence of j index which lower than i index
						// std::cout << "before _seq[i]: " << i << "," << _seq[i] << std::endl;
						unsigned int l = i;
						int num = _seq[i];
						unsigned int k = this->findPositionInsert(num, j, nend);
						// std::cout << "sort at index :" << k << std::endl;
						while (i < k){
							int tmp1 = _seq[i + 1];
							_seq[i + 1] = num;
							_seq[i] = tmp1;
							i++;
						}
						i = l;
						j--;
						// std::cout << "after _seq[i]: " << i << "," << _seq[i] << std::endl;
					}
				}
			}
			// this->printSort(start, nend, YEL, GRN, "Partition\n");
		}

		void insertPartition(size_t start, size_t end){
			typename T::iterator it1;
			typename T::iterator it2;
			unsigned int nend;
			if (end == this->_seq.size())
				nend = end;
			else
				nend = end + 1;
			for (unsigned int i = start; i < (start + nend) / 2; i++){
				it1 = std::upper_bound (_seq.begin() + ((start + nend) / 2), _seq.begin() + nend, _seq[i]);
				// std::cout << _seq[i] << " should be at ";
				// std::cout << *it1 << " at position " << it1 - _seq.begin() << std::endl;
				// if (_seq[i] > _seq[i + 1] && i < ((start + nend) / 2) - 1){
				// 	std::iter_swap(&_seq[i], &_seq[i + 1]);
				// 	i = start;
				// }
				// for (unsigned int j = (start + nend) / 2; j < nend; j++){
					//optimize use search to find consequence of j index which lower than i index
					// if ( _seq[i] > _seq[j] && i < j){
						// unsigned int l = i;
						int num = _seq[i];
						// std::cout << std::endl;
						// unsigned int k = this->findPositionInsert(num, j, nend);
					unsigned int k = it1 - _seq.begin();
					// std::cout << "before _seq[i]: " << i << "," << _seq[i] << " and > " << k << std::endl;
					if (k > 0 && i < k - 1){
						k--;
						// std::cout << "i : " << i << " k : " << k << std::endl;
						if (_seq[i] > _seq[k]){
							unsigned int l = 0;
							if (i != start && i != ((start + nend) / 2) - 1)
								l = i - 1;
							else
								l = i;
							while (i < k){
								int tmp1 = _seq[i + 1];
								_seq[i + 1] = num;
								_seq[i] = tmp1;
								i++;
							}
							i = l;
						}
						// std::cout << "after _seq[i]: " << i << "," << _seq[i] << " and start at " << k << std::endl;
						// std::cout << std::endl;
					}
					// while (_seq[i] <= _seq[i + 1] && i < ((start + nend) / 2) - 1)
					// 	i++;
					// this->printSort(start, nend, BLU, GRN, "insert Partition\n");
						// j = (start + nend) / 2;
						// j--;
					// }
				// }
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
			// std::cout << MAG << "container : ";
			// for (unsigned int i = 0; i < _seq.size(); i++){
			// 	std::cout << _seq[i] << " ";
			// }
			if ((start + end) / 2 > start && start != 1) {
				// std::cout << WHT;
				// std::cout << "start : " << start << " " << "end : " << end << std::endl;
				this->sortPairInput(start, end);
				this->mergeInsertionSort(start, (start + end) / 2);
				this->mergeInsertionSort((start + end) / 2, end);
				this->partitionSwap(start, end);
				this->insertPartition(start, end);
			}
		}
};

#endif
