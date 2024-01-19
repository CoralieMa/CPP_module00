/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:11:11 by cmartino          #+#    #+#             */
/*   Updated: 2024/01/19 09:37:31 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initialDeposit) : _amount(initialDeposit){
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += initialDeposit;
	++Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	++this->_nbDeposits;
	++Account::_totalNbDeposits;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	++this->_nbWithdrawals;
	++Account::_totalNbWithdrawals;
	std:: cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const{
	return (this->_amount);
}

void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:";
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
	std::time_t currTime = std::time(0);
	std::tm* 	now = std::localtime(&currTime);
	
	std::cout << '[' << (now->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << now->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) <<  now->tm_mday;
	std::cout << '_';
	std::cout << std::setfill('0') << std::setw(2) <<  now->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) <<  now->tm_min;
	std::cout << std::setfill('0') << std::setw(2) <<  now->tm_sec;
	std::cout << "] ";
}
