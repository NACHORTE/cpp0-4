/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/19 20:00:15 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);