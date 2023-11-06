/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:02:15 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/29 13:31:15 by cmartino         ###   ########.fr       */
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

	void	displayPreview(void);
	void	displayContact(void);
	bool	checkFirstName(std::string str);
	bool	checkLastName(std::string str);
	bool	checkNickname(std::string str);
	bool	checkPhoneNbr(std::string str);
	bool	checkSecret(std::string str);

	private:
		//to do
};

void	display(std::string str);
bool	checkStr(std::string str);

#endif
