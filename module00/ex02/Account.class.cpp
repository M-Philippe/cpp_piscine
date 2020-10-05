/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 23:15:19 by user42            #+#    #+#             */
/*   Updated: 2020/10/05 19:36:28 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"

#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "deposits:" + std::to_string(this->_nbDeposits) + ";";
	std::cout << "withdrawals:" + std::to_string(this->_nbWithdrawals);
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::time_t		time;

	time = std::time(NULL);
	std::cout << "[" + std::to_string(1900 + std::localtime(&time)->tm_year);
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << std::to_string(std::localtime(&time)->tm_mon + 1);
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << std::to_string(std::localtime(&time)->tm_mday) + "_";
	std::cout << std::to_string(std::localtime(&time)->tm_hour);
	std::cout << std::to_string(std::localtime(&time)->tm_min);
	std::cout << std::to_string(std::localtime(&time)->tm_sec);
	std::cout << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" + std::to_string(_nbAccounts) + ";";
	std::cout << "total:" + std::to_string(_totalAmount) + ";";
	std::cout << "deposits:" + std::to_string(_totalNbDeposits) + ";";
	std::cout << "withdrawals:" + std::to_string(_totalNbWithdrawals) << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "p_amount:" + std::to_string(this->_amount) + ";";
	std::cout << "deposit:" + std::to_string(deposit) + ";";
	this->_amount += deposit;
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "nb_deposits:" + std::to_string(this->_nbDeposits) << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "p_amount:" + std::to_string(this->_amount) + ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" + std::to_string(withdrawal) + ";";
		std::cout << "amount:" + std::to_string(this->_amount) + ";";
		std::cout << "nb_withdrawals:" + std::to_string(this->_nbWithdrawals) << std::endl;
		return (true);
	}
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "deposits:" + std::to_string(this->_nbDeposits) + ";";
	std::cout << "withdrawals:" + std::to_string(this->_nbWithdrawals) << std::endl;
}