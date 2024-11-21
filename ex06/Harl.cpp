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
	std::string levels[]{"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t i = 0;
	for (; i < sizeof(levels) / sizeof(std::string); i++)
		if (level == levels[i]) break;

	switch (i)
	{
		case (0):
			this->debug();
		/* fallthrough */
		case (1):
			this->info();
		/* fallthrough */
		case (2):
			this->warning();
		/* fallthrough */
		case (3):
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
			          << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my "
	             "7XL-double-cheese-triple-pickle-special-ketchup burger.I "
	             "really do !"
	          << std::endl;
}

void Harl::info(void)
{
	std::cout
	    << "[INFO]\nI cannot believe adding extra bacon costs more money. You "
	       "didn’t put enough bacon in my burger! If you did, I wouldn’t "
	       "be asking for more!"
	    << std::endl;
}

void Harl::warning(void)
{
	std::cout
	    << "[WARNING]\nI think I deserve to have some extra bacon for free. "
	       "I’ve been "
	       "coming for years whereas you started working here since last month."
	    << std::endl;
}

void Harl::error(void)
{
	std::cout
	    << "[ERROR]\nThis is unacceptable! I want to speak to the manager now."
	    << std::endl;
}
