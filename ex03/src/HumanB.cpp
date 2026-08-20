/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:59:12 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 17:02:41 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name): _name(name), _weaponPtr(NULL)
{   
}
HumanB::~HumanB()
{
}
void HumanB::attack() const
{
    std::cout << _name << " attacks with their " << this->_weaponPtr->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weaponPtr = &weapon;
}