/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:03:42 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/17 15:46:38 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (1)
	{
		std::cout << "ADD - add a new contact" << std::endl;
		std::cout << "SEARCH - search a contact" << std::endl;
		std::cout << "EXIT - exit the program" << std::endl << std::endl;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl << std::endl;
	}
	return 0;
}