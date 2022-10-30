/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:33:15 by bledda            #+#    #+#             */
/*   Updated: 2021/08/26 13:19:42 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts 			= 0;
int	Account::_totalAmount 			= 0;
int	Account::_totalNbDeposits 		= 0;
int	Account::_totalNbWithdrawals 	= 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex 	= this->_nbAccounts;
	this->_amount 			= initial_deposit;
	this->_nbDeposits 		= 0;
	this->_nbWithdrawals 	= 0;

	this->_displayTimestamp();
	std::cout << " index:" 	<< this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;	

	this->_totalAmount += this->checkAmount();
	this->_nbAccounts++;
	return ;
}

Account::~Account( void )
{
	this->_nbAccounts--;
	this->_displayTimestamp();
	std::cout << " index:" 	<< this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";closed";
	std::cout << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" 		<< Account::getNbAccounts();
	std::cout << ";total:" 			<< Account::getTotalAmount();
	std::cout << ";deposits:" 		<< Account::getNbDeposits();
	std::cout << ";withdrawals:" 	<< Account::getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " index:" 			<< this->_accountIndex;
	std::cout << ";p_amount:" 		<< this->checkAmount();
	std::cout << ";deposits:" 		<< deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits += this->_nbDeposits;
	std::cout << ";amout:" 			<< this->checkAmount();
	std::cout << ";nb_deposits:" 	<< this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout << " index:" 		<< this->_accountIndex;
	std::cout << ";p_amount:" 	<< this->checkAmount();
	if (this->checkAmount() - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused";
		std::cout << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;
	std::cout << ";amount:" 		<< this->checkAmount();
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" 			<< this->_accountIndex;
	std::cout << ";amount:" 		<< this->checkAmount();
	std::cout << ";deposits:" 		<< this->_nbDeposits;
	std::cout << ";withdrawals:" 	<< this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t 	rawtime;
	struct 	tm * timeinfo;
	char 	buffer[18];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime (buffer,18,"[%G%m%d_%H%M%S]",timeinfo);
	std::cout << buffer;
}

int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

