/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:36:30 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:50:08 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string const type);
		~Weapon();
		const std::string& getType() const;
		void setType(std::string const type);
};