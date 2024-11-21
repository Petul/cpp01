/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:17:48 by pleander          #+#    #+#             */
/*   Updated: 2024/11/20 15:29:26 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
   public:
	void complain(std::string level);

   private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
