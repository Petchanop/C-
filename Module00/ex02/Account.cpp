/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:07:14 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/03 01:16:38 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "index:" << 0;
}

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
}

Account::~Account( void )
{
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal >= 0)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else {
		return (false);
	}

}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout<< "index:" << this->_accountIndex << "p_amount:" << this->_amount;
	std::cout<< ""
}

// index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1