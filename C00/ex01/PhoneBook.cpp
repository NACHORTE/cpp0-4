/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:52:32 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/17 15:39:50 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::addContact()
{
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	std::cout << "First name: ";
	std::cin >> _firstName;
	contacts[index].setFirstName(_firstName);
	std::cout << "Last name: ";
	std::cin >> _lastName;
	contacts[index].setLastName(_lastName);
	std::cout << "Nickname: ";
	std::cin >> _nickname;
	contacts[index].setNickname(_nickname);
	std::cout << "Phone number: ";
	std::cin >> _phoneNumber;
	contacts[index].setPhoneNumber(_phoneNumber);
	std::cout << "Darkest secret: ";
	std::cin >> _darkestSecret;
	contacts[index].setDarkestSecret(_darkestSecret);
	index = (index + 1) % 8;
}

void	PhoneBook::searchContact()
{
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    for (int i = 0; i < index; ++i)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
    }
	std::cout << "Enter an index: ";
	int i;
	std::cin >> i;
	if (i >= 0 && i < index)
	{
		std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
