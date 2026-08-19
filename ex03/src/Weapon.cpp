/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 14:09:05 by schouite          #+#    #+#             */
/*   Updated: 2026/08/19 18:26:35 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(std::string type)
{
	_type = type;
}
Weapon::~Weapon()
{
}
const std::string &Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
HumanA::HumanA(const std::string &name, Weapon &type) : _name(name), _type(type)
{
}
HumanA::~HumanA()
{
}
void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}
HumanB::HumanB(const std::string &name) : _name(name), _typePtr(NULL)
{
}
HumanB::~HumanB()
{
}

void HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _typePtr->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	_typePtr = &type;
}