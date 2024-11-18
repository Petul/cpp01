/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:26 by pleander          #+#    #+#             */
/*   Updated: 2024/11/18 19:12:33 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
	Zombie	*heap_zombie = nullptr;
	try {
		heap_zombie = newZombie("Heap zombie");
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what() << std::endl;
	}
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("Stack zombie");
}

