/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:16:51 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 15:02:59 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB
{
   public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);

   private:
	std::string name_;
	Weapon *weapon_{nullptr};
};

#endif
