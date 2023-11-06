/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:14:02 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/29 15:59:36 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	getIndex(std::string input)
{
	if (input.size() != 1 || !isdigit(input[0]))
		return (-1);
	if (input[0] >= '0' && input[0] <= '7')
		return (input[0] - '0');
	return (-1);
	
}

// pouvoir EXIT quand on est dans ADD ou dans SEARCh + mettre certaines chises en private dans les classes + ameliorer le code pour affciher le phonebook?

int	main(void)
{
	int			i;
	int			j;
	int			index;
	PhoneBook	phoneBook;
	std::string input;

	std::cout << "Enter a command : ";
	input = getline();
	i = 0;
	j = 0;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cout << std::endl << "***** New contact *****" << std::endl;
			phoneBook.addContact(i);
			std::cout << std::endl;
			++i;
			++j;
			if (i == 8)
				i = 0;
			if (j > 8)
				j = 8;
		}
		if (input == "SEARCH")
		{
			std::cout << std::endl << "          ***** Phone Book *****" << std::endl;
			if (j == 0)
			{
				std::cout << "The phone book is empty" << std::endl;
				std::cout << std::endl;
			}
			else
			{
				phoneBook.displayPhoneBook(j);
				std::cout << "Enter the contact's index to display his informations" << std::endl;
				input = getline();
				std::cout << std::endl;
				index = getIndex(input);
				if (index == -1 || index >= j)
					std::cout << "Wrong input" << std::endl << std::endl;
				else
					phoneBook.contact[index].displayContact();
			}
		}
		std::cout << "Enter a command : ";
		input = getline();
	} 
	return (0);
}