/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:31:03 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 16:44:15 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const std::string &weapon)
{
	_weapon = weapon;
}
Weapon::~Weapon()
{
}
const std::string &Weapon::getType() const
{
	return (_weapon);
}

void Weapon::setType(const std::string &type)
{
	_weapon = type;
}

