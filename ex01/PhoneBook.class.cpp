/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:00:35 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 10:05:26 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Phone Book created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Phone Book destroy" << std::endl;
	return ;
}

void	PhoneBook::add_contact(int i){
	std::string input;

	this->contact[i].index = i;
	input = add_data("First name : ");
	while(this->contact[i].check_first_name(input))
		input = add_data("First name : ");
	input = add_data("Last name : ");
	while(this->contact[i].check_last_name(input))
		input = add_data("Last name : ");
	input = add_data("Nickname : ");
	while(this->contact[i].check_nickname(input))
		input = add_data("Nickname : ");
	input = add_data("Phone number : ");
	while(this->contact[i].check_phone_nbr(input))
		input = add_data("Phone number : ");
	input = add_data("Darkest secret : ");
	while(this->contact[i].check_secret(input))
		input = add_data("Darkest secret : ");	
}

std::string	add_data(std::string str){
	std::string input;

	std::cout << str;
	std::getline (std::cin, input);
	return (input);
}

void	PhoneBook::display_PhoneBook(int nb_contact)
{
	int	i;

	i = 0;
	while (i < nb_contact)
	{
		this->contact[i].display_preview();
		std::cout << std::endl;
		++i;
	}
}
