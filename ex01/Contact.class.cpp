/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:02:02 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 09:37:24 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void){
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::display_preview(void)
{
	std::cout << "         " << this->index << "|";
	display(this->firstName);
	std::cout << "|";
	display(this->lastName);
	std::cout << "|";
	display(this->nickName);
	std::cout << std::endl;
}

void	Contact::display_contact(void){
	std::cout << "Index : " << this->index << std::endl;
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nickame : " << this->nickName << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->secret << std::endl << std::endl;
}

bool	Contact::check_first_name(std::string str)
{
	this->firstName = str;
	return (check_str(str));
}

bool	Contact::check_last_name(std::string str)
{
	this->lastName = str;
	return (check_str(str));
}

bool	Contact::check_nickname(std::string str)
{
	this->nickName = str;
	return (check_str(str));
}

bool	Contact::check_phone_nbr(std::string str)
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

bool	Contact::check_secret(std::string str)
{
	this->secret = str;
	return (check_str(str));
}

bool	check_str(std::string str){
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
