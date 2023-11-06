/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:02:02 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 11:47:20 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void){
	return ;
}

void	Contact::displayPreview(void)
{
	std::cout << "         " << this->index << "|";
	display(this->firstName);
	std::cout << "|";
	display(this->lastName);
	std::cout << "|";
	display(this->nickName);
	std::cout << std::endl;
}

void	Contact::displayContact(void){
	std::cout << "Index : " << this->index << std::endl;
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nickame : " << this->nickName << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->secret << std::endl << std::endl;
}

bool	Contact::checkFirstName(std::string str)
{
	this->firstName = str;
	return (checkStr(str));
}

bool	Contact::checkLastName(std::string str)
{
	this->lastName = str;
	return (checkStr(str));
}

bool	Contact::checkNickname(std::string str)
{
	this->nickName = str;
	return (checkStr(str));
}

bool	Contact::checkPhoneNbr(std::string str)
{
	size_t	i;
	size_t	size = str.size();
	
	i = 0;
	if (size == 0)
		return (true);
	while (i < size)
	{
		if (!isdigit(str[i]))
			return (true);
		++i;
	}
	this->phoneNumber = str;
	return (false);
}

bool	Contact::checkSecret(std::string str)
{
	this->secret = str;
	return (checkStr(str));
}

bool	checkStr(std::string str){
	if (str.size() == 0)
		return (true);
	return (false);
}

void	display(std::string str){
	size_t size;

	size = str.size();
	if (size <= 10)
	{
		while (size < 10)
		{
			std::cout << " ";
			++size;
		}
		std::cout << str;
	}
	else
	{
		str.resize(9);
		std::cout << str << ".";
	}
}
