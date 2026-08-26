/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:19:56 by schouite          #+#    #+#             */
/*   Updated: 2026/08/26 10:54:36 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
  public:
    Harl();
    ~Harl();
    void complain(std::string level);
  private:
    void debug();
    void info();
    void warning();
    void error();
};