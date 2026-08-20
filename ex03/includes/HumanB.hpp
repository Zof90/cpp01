/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:59:14 by schouite          #+#    #+#             */
/*   Updated: 2026/08/20 16:49:10 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
  public:
	HumanB(const std::string &name);
	~HumanB();
	void attack() const;
    void setWeapon(Weapon &weapon);

  private:
	std::string _name;
	Weapon *_weaponPtr;
};

#endif