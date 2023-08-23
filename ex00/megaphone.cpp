/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:57:29 by cmartino          #+#    #+#             */
/*   Updated: 2023/08/23 12:05:19 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    int          i;
    int          j;
    int          size;
    std::string  str;

    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while ( i < argc)
        {
           j = 0;
           str = std::string(argv[i]);
           size = (int)str.size();
           while (j < size)
           {
            str[j] = toupper(str[j]);
            ++j;
           }
           std::cout << str;
            ++i;
            if (i != argc)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}
