/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:11:11 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/23 14:55:26 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit){
	++Account::_nbAccounts;
	std::cout << "[timestamp]" << " index:" << "?" << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void){
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
	// to do
}

void	Account::makeDeposit(int deposit){
	// to do
}

bool	Account::makeWithdrawal(int withdrawal){
	// to do
}

int	Account::checkAmount(void) const{
	// to do
}

void	Account::displayStatus(void) const{
	// to do
}

void	Account::_displayTimestamp(void){
	// to do
}
