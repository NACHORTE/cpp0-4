/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:52:32 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/17 15:57:35 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::addContact()
{
	std::string input;

	std::cout << "First name: ";
	std::cin >> input;
	contacts[index].setFirstName(input);
	std::cout << "Last name: ";
	std::cin >> input;
	contacts[index].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	contacts[index].setNickname(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	contacts[index].setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	contacts[index].setDarkestSecret(input);
	std::cout << std::endl;
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
		std::cout << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl << std::endl;
}
