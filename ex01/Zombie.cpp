/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 03:37:58 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 06:27:24 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Destrucotr used for destroying: " << this->_name << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

void	Zombie::anounce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

