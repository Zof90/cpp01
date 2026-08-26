/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:26:04 by schouite          #+#    #+#             */
/*   Updated: 2026/08/26 12:30:18 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Harl bob;

	bob.complain("DEBUG");
	bob.complain("INFO");
	bob.complain("WARNING");
	bob.complain("ERROR");
}