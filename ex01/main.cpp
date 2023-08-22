/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:14:02 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 09:55:08 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

void	print_index_contact(Contact contact, int j)
{
	std::cout << j << "|";
	std::cout << contact.firstName << "|";
	std::cout << contact.lastName << "|";
	std::cout << contact.nickName << std::endl;
}

void	print_index(PhoneBook phoneBook, int j)
{
	int	index;
	
	index = 0;
	if (j > 8)
		j = 8;
	while (index < j)
	{
		print_index_contact(phoneBook.contact[index], index);
		++index;
	}
}

int	main(void)
{
	int			i;
	int			j;
	// int			index;
	PhoneBook	phoneBook;
	std::string input;

	std::cout << "Enter a command : ";
	std::getline (std::cin, input);
	i = 0;
	j = 0;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cout << std::endl << "***** New contact *****" << std::endl;
			phoneBook.add_contact(i);
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
				phoneBook.display_PhoneBook(j);
				std::cout << "Enter the contact's index to display his informations" << std::endl;
				std::getline (std::cin, input);
				if (input.size() != 1 || !isdigit(input[0]) || stoi(input) < 0 || stoi(input) > 7)
					std::cout << "Wrong input" << std::endl << std::endl;
				else
				{
					phoneBook.contact[stoi(input)].display_contact();
				}
			}
		}
		std::cout << "Enter a command : ";
		std::getline (std::cin, input);
	} 
	return (0);
}