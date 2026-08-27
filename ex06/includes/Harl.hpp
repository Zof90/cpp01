/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:38:26 by schouite          #+#    #+#             */
/*   Updated: 2026/08/27 12:49:12 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
  public:
    Harl();
    ~Harl();
    void complain(std::string level);
    void exec(void (*func)());
  private:
    void debug();
    void info();
    void warning();
    void error();
};