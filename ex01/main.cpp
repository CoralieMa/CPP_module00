/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:14:02 by cmartino          #+#    #+#             */
/*   Updated: 2024/01/16 14:08:48 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	getIndex(std::string input)
{
	if (input.size() != 1 || !isdigit(input[0]))
		return (-1);
	if (input[0] >= '0' && input[0] <= '8')
		return (input[0] - '0');
	return (-1);
	
}

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
				index = getIndex(input);
				if (index <= 0 || index > j)
					std::cout << "Wrong input " << std::endl << std::endl;
				else
					phoneBook.contact[index - 1].displayContact();
			}
		}
		std::cout << "Enter a command : ";
		input = getline();
	} 
	return (0);
}