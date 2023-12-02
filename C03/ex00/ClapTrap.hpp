/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:08 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:32:49 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap();
		ClapTrap(const ClapTrap &);
		ClapTrap & operator=(const ClapTrap &rhs);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

