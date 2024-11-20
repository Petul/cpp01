/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:26:58 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 14:57:34 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name_{name}, weapon_{weapon}
{
}

void HumanA::attack(void)
{
	std::cout << this->name_ << " attacks with their "
	          << this->weapon_.getType() << std::endl;
}
