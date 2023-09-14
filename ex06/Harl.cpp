/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:58:54 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/14 02:23:50 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string ftab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void (Harl::*f[4])();
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
	for (int n = 0; n < 4; n++)
	{
		if (ftab[n] == level)
		{
			while (n < 4)
			{
				(this->*f[n])();
				n++;
			}
			return ;
		}
	}
	std::cout << "It would be great if you could complain about something relevant please." << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR << std::endl;
}
