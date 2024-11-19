/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:33:13 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 10:41:04 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string str{"HI THIS IS BRAIN"};
	std::string *stringPTR{&str};
	std::string &stringREF{str};

	std::cout << "Address of string: " << &str << "\n"
	          << "Address held by stringPTR: " << stringPTR << "\n"
	          << "Address held by stringREF: " << &stringREF << "\n"
	          << "Value of string: " << str << "\n"
	          << "Value pointed by stringPTR: " << *stringPTR << "\n"
	          << "Value pointed by stringREF: " << stringREF << std::endl;

	return (0);
}
