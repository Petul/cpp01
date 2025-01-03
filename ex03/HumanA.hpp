/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:26:11 by pleander          #+#    #+#             */
/*   Updated: 2025/01/03 10:17:50 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

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
