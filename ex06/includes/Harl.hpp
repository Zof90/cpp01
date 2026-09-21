/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:38:26 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 16:25:42 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

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
#endif