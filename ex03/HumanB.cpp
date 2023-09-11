/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:26 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 00:49:04 by jareste-         ###   ########.fr       */
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
	std::string	weapon_type;

	weapon_type = weapon->getType();
	if (weapon_type.length() < 1)
		std::cout << name << " has no weapon yet." << std::endl;
	else
		std::cout << name << " attacks with their " << weapon_type << "." << std::endl;
}

void	HumanB::setWeapon(Weapon *_weapon)
{
	weapon = _weapon;
}
