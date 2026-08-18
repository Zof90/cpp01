/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:50:25 by schouite          #+#    #+#             */
/*   Updated: 2026/08/18 15:45:22 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::string name = "bob";
	int N = 5;
	int i = 0;

	Zombie *zom = zombieHorde(N, name);
	while (i < N)
    {
		zom[i].announce();
        i++;
    }
	delete[] zom;
}