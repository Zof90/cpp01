/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:17:46 by schouite          #+#    #+#             */
/*   Updated: 2026/08/14 16:48:05 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
  public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void) const;

  private:
	std::string _name;
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);