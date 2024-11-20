/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:59:26 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 15:05:48 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name) : name_{name} {}

void HumanB::attack(void)
{
	if (this->weapon_)
	{
		std::cout << this->name_ << " attacks with their "
		          << this->weapon_->getType() << std::endl;
	}
	else
	{
		std::cout << this->name_ << " has no weapon" << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon) { this->weapon_ = &weapon; }
