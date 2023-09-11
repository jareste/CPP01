/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 03:37:58 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 19:28:50 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Destructor used for destroying: " << this->_name << std::endl;
}

void	Zombie::zombie_name(std::string name)
{
	_name = name;
	// std::cout << "aaaaaaa::::::::::: " << this->_name << std::endl;

}

void	Zombie::anounce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

