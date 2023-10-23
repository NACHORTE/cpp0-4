/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:36:37 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 11:39:16 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};
typedef void (Harl::*t_func) ( void );