/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:19:56 by pleander          #+#    #+#             */
/*   Updated: 2024/11/21 15:40:57 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

void Harl::complain(std::string level)
{
	void (Harl::* complainFuncs[])(void){&Harl::debug, &Harl::info,
	                                     &Harl::warning, &Harl::error};
	std::string levels[]{"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < sizeof(levels) / sizeof(std::string); i++)
	{
		if (level == levels[i])
		{
			(this->*complainFuncs[i])();
			return;
		}
	}
	std::cout << "No such level" << std::endl;
	return;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	             "7XL-double-cheese-triple-pickle-special-ketchup burger.I "
	             "really do !"
	          << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You "
	             "didn’t put enough bacon in my burger! If you did, I wouldn’t "
	             "be asking for more!"
	          << std::endl;
}

void Harl::warning(void)
{
	std::cout
	    << "I think I deserve to have some extra bacon for free. I’ve been "
	       "coming for years whereas you started working here since last month."
	    << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	          << std::endl;
}
