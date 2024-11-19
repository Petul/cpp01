/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:31:51 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 10:24:27 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
  public:
	Zombie(std::string name);
	Zombie();
	~Zombie(void);
	void announce(void);
	void setName(std::string name);

  private:
	std::string name_;
};

#endif
