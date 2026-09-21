/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:42:08 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 17:33:19 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstddef>
#include <iostream>
#include <string>

Harl::Harl()
{
}
Harl::~Harl()
{
}
void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				 "ketchup burger. I really do!"
			  << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! If you did, "
				 "I wouldn't be asking for more!"
			  << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years, whereas you started working here just last month."
			  << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}
void Harl::complain(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	enum	tab
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
	int		i = 0;
	while (i < 4)
	{
		if (lvl[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
	case DEBUG:
		this->debug();
	// fallthrough
    case INFO:
		this->info();
    // fallthrough
	case WARNING:
		this->warning();
    // fallthrough
	case ERROR:
	{
		this->error();
		break ;
	}
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}