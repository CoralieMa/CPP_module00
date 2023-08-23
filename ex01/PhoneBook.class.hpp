/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:00:04 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/23 12:04:05 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook
{
public:
	Contact contact[10];

	PhoneBook(void);
	~PhoneBook(void);

	void	add_contact(int i);
	void	display_PhoneBook(int nb_contact);
};

std::string	add_data(std::string str);
std::string	ft_getline();

#endif
