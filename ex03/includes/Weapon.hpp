/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:24:55 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 13:58:03 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
    public:
        Weapon(const std::string &weapon);
        ~Weapon();
        const std::string& getType() const;
        void setType(const std::string &type);
        void attack(void);
    private:
        std::string _weapon;
       
};
#endif