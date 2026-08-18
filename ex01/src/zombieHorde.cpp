/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:01:06 by schouite          #+#    #+#             */
/*   Updated: 2026/08/18 14:21:26 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zom = new Zombie[N];
    while (i < N)
    {
        zom[i].setName(name);
        i++;
    }
    return(zom);
}