/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:14 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 01:03:51 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

const std::string	Weapon::getType() const
{
	return (type);
}

void		Weapon::setType(std::string _type)
{
	type = _type;
}
