/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:59:10 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 16:51:24 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(const std::string name, Weapon &weapon):_name(name), _weapon(weapon)
{
}
HumanA::~HumanA()
{
    
}
void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
