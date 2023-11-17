/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:55:40 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:22:24 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete [] zombies;
	std::cout << std::endl;
	//system("leaks -q zombieHorde");
	return (0);
}