/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:57:05 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 16:58:34 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap(std::string name);
		~FlagTrap(void);
		void highFivesGuys(void);
};
