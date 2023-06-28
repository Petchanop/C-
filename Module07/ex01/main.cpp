/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:07:42 by npiya-is          #+#    #+#             */
/*   Updated: 2023/06/28 22:22:00 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	IncreaseByOne(int &num){
	num++;
}

void	appendWord(std::string &word){
	word.append("Append");
}

// int main(void){
// 	int	a[] = {2,4,6,-5,10};
// 	iter(a, sizeof(a) / sizeof(a[0]), &IncreaseByOne);

// 	for (int i = 0; i < 5; i++){
// 		std::cout << a[i] << std::endl;
// 	}

// 	std::string str[] = {"test", "string", "append"};
// 	iter(str, sizeof(str) / sizeof(str[0]), &appendWord);

// 	for (int i = 0; i < 3; i++){
// 		std::cout << str[i] << std::endl;
// 	}
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
