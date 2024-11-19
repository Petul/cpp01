/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:45:27 by pleander          #+#    #+#             */
/*   Updated: 2024/11/19 21:57:51 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void ft_sed(std::string &line, std::string &search, std::string &replace)
{
	size_t pos = line.find(search);
	while (pos != std::string::npos)
	{
		line.erase(pos, search.length());
		line.insert(pos, replace);
		pos = line.find(search);
	}
}

int main(int argc, char **argv)
{
	std::string file{argv[1]};
	std::string outfile{file + ".replace"};
	std::string search{argv[2]};
	std::string replace{argv[3]};
	std::ifstream inf{file};

	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0]
		          << " filename string_to_update update_string" << std::endl;
		return (1);
	}
	if (!inf.is_open())
	{
		std::cout << "Error: cannot open infile" << std::endl;
		return (1);
	}
	std::ofstream of{outfile};
	if (!of.is_open())
	{
		std::cout << "Error: cannot open outfile" << std::endl;
		return (1);
	}
	std::string input{};
	while (std::getline(inf, input))
	{
		input.append("\n");
		ft_sed(input, search, replace);
		of << input;
	}
	return (0);
}
