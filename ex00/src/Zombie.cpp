/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:36:06 by pleander          #+#    #+#             */
/*   Updated: 2024/11/18 18:44:15 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::Zombie(std::string name) : name_{name} {}

Zombie::~Zombie(void) {
	std::cout << this->name_ << ": destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
