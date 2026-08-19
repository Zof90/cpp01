/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 14:13:39 by schouite          #+#    #+#             */
/*   Updated: 2026/08/19 18:26:21 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
  public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void) const;
	void setType(const std::string &type);

  private:
	std::string _type;
};

class HumanA
{
  public:
	HumanA(const std::string &name, Weapon &type);
	~HumanA();
	void attack() const;

  private:
	std::string _name;
	Weapon &_type;
};

class HumanB
{
  public:
	HumanB(const std::string& name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &type);

  private:
	std::string _name;
	Weapon *_typePtr;
};
