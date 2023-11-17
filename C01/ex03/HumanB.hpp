/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:07:49 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:49:30 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string const name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon& weapon);
};