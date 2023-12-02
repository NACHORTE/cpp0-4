/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:57:05 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:57:30 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap & rhs);
		void highFivesGuys(void);
};
