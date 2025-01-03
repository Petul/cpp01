/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:16:51 by pleander          #+#    #+#             */
/*   Updated: 2025/01/03 10:17:37 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

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
