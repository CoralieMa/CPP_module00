/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:11:11 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 15:47:13 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit){
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
