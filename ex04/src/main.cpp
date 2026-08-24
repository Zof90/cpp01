/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:21:13 by schouite          #+#    #+#             */
/*   Updated: 2026/08/24 17:28:25 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ifstream file_in(argv[1]);
	std::string line;
	std::size_t pos = 0;
	if (s1.empty())
	{
		std::cerr << "Error: string to replace cannot be empty" << std::endl;
		return (1);
	}
	if (!file_in.is_open())
	{
		std::cerr << "Error: cannot open input file" << std::endl;
		return (1);
	}
	std::string out = std::string(argv[1]) + ".replace";
	std::ofstream file_out(out.c_str());
	if (!file_out.is_open())
	{
		std::cerr << "Error: cannot create out file" << std::endl;
		return (1);
	}
	while (std::getline(file_in, line))
	{
		pos = 0;
		while (pos != std::string::npos)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		file_out << line;
		if (!file_in.eof())
			file_out << std::endl;
	}
	file_in.close();
	file_out.close();
	return (0);
}