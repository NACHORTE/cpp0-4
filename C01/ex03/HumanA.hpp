/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:40:24 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:48:46 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string const name, Weapon& weapon);
		~HumanA();
		void attack() const;
};