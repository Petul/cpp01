/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:26:11 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 14:30:07 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
   public:
	void attack(void);
	HumanA(std::string name, Weapon &Weapon);

   private:
	std::string name_;
	Weapon &weapon_;
};

#endif
