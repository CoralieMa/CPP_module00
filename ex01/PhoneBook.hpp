/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:00:04 by cmartino          #+#    #+#             */
/*   Updated: 2024/01/15 11:55:45 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
	Contact contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(int i);
	void	displayPhoneBook(int nb_contact);
};

std::string	addData(std::string str);
std::string	getline();

#endif
