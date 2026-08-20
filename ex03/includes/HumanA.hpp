/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:22:33 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 16:32:04 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string name, Weapon &weapon);
        ~HumanA();
        void attack() const;
    private:
        std::string _name;
        Weapon &_weapon;
};
#endif