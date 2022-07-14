/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:21:59 by anruland          #+#    #+#             */
/*   Updated: 2022/07/14 19:16:28 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}
	
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";total:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::_displayTimestamp( void )
{
	time_t t;
	t = time(NULL);
	tm *time = std::localtime(&t);
	std::cout << "[" << time->tm_year + 1900;
	if (time->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << time->tm_mon + 1;
	if (time->tm_mday < 10)
		std::cout << "0";
	 std::cout << time->tm_mday;
	std::cout << "_";
	if (time->tm_hour < 10)
		std::cout << "0";
	std::cout << time->tm_hour;
	if (time->tm_min < 10)
		std::cout << "0";
	std::cout << time->tm_min; 
	if (time->tm_sec < 10)
		std::cout << "0";
	std::cout << time->tm_sec;
	std::cout << "] ";
}
