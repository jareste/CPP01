/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:26 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 01:02:12 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string _name)
{
	name = _name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (has_weapon == false)
		std::cout << name << " has no weapon yet." << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << "." << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	has_weapon = true;
	weapon = &_weapon;
}
