/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:52:24 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/17 16:21:08 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string _firstName)
{
	firstName = _firstName;
}

void	Contact::setLastName(std::string _lastName)
{
	lastName = _lastName;
}

void	Contact::setNickname(std::string _nickname)
{
	nickname = _nickname;
}

void	Contact::setPhoneNumber(std::string _phoneNumber)
{
	phoneNumber = _phoneNumber;
}

void	Contact::setDarkestSecret(std::string _darkestSecret)
{
	darkestSecret = _darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return firstName;
}

std::string	Contact::getLastName() const
{
	return lastName;
}

std::string	Contact::getNickname() const
{
	return nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return darkestSecret;
}
