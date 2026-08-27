/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:37:15 by schouite          #+#    #+#             */
/*   Updated: 2026/08/27 13:34:06 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	Harl bob;
	if (argc != 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (1);
	}
	bob.complain(argv[1]);
	return (0);
}