/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:12:44 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 14:57:54 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_{type}
{
}

const std::string& Weapon::getType(void)
{
	return (this->type_);
}

void Weapon::setType(std::string type)
{
	this->type_ = type;
	return;
}
