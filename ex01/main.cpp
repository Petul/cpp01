/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:26 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 10:28:42 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	int N = 0;
	Zombie *horde = nullptr;
	try
	{
		horde = zombieHorde(N, "Zombie horde zombie");
		if (!horde)
		{
			return (0);
		}
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
