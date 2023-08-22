/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:02:15 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/22 09:31:29 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact
{
public:
	std::string	phoneNumber;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string secret;
	int			index;
	
	Contact(void);
	~Contact(void);

	void	display_preview(void);
	void	display_contact(void);
	bool	check_first_name(std::string str);
	bool	check_last_name(std::string str);
	bool	check_nickname(std::string str);
	bool	check_phone_nbr(std::string str);
	bool	check_secret(std::string str);
};

void	display(std::string str);
bool	check_str(std::string str);

#endif
