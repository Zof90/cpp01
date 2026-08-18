/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:55:41 by schouite          #+#    #+#             */
/*   Updated: 2026/08/17 16:31:41 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iostream"

Zombie::Zombie(void)
{
}
Zombie::~Zombie(void)
{
	std::cout << _name << std::endl;
}
void Zombie::announce(void) const
{
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
