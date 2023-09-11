/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:20 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 00:48:58 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.h"

HumanA::HumanA(std::string _name, Weapon *_weapon)
{
	name = _name;
	weapon = _weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << "." << std::endl;
}