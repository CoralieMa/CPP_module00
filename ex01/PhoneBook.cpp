/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:00:35 by cmartino          #+#    #+#             */
/*   Updated: 2024/01/15 14:36:55 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Phone Book created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Phone Book destroy" << std::endl;
	return ;
}

void	PhoneBook::addContact(int i){
	std::string input;

	this->contact[i].index = i;
	input = addData("First name : ");
	while(this->contact[i].checkFirstName(input))
		input = addData("First name : ");
	input = addData("Last name : ");
	while(this->contact[i].checkLastName(input))
		input = addData("Last name : ");
	input = addData("Nickname : ");
	while(this->contact[i].checkNickname(input))
		input = addData("Nickname : ");
	input = addData("Phone number : ");
	while(this->contact[i].checkPhoneNbr(input))
		input = addData("Phone number : ");
	input = addData("Darkest secret : ");
	while(this->contact[i].checkSecret(input))
		input = addData("Darkest secret : ");	
}

std::string	addData(std::string str){
	std::string input;

	std::cout << str;
	input = getline();
	return (input);
}

void	PhoneBook::displayPhoneBook(int nb_contact)
{
	int	i;

	i = 0;
	while (i < nb_contact)
	{
		this->contact[i].displayPreview();
		std::cout << std::endl;
		++i;
	}
}

std::string	getline()
{
	std::string	input;

	std::getline (std::cin, input);
	if (std::cin.eof())
		std::exit(0);
	return (input);
}
