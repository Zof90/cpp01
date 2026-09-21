/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:53:12 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 16:23:47 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
  public:
	Zombie(void);
	~Zombie(void);
	void announce(void) const;
	void setName(std::string name);

  private:
	std::string _name;
};
Zombie	*zombieHorde(int N, std::string name);
#endif