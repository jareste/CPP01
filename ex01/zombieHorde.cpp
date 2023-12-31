/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 06:28:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 19:49:44 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie = new Zombie[N];


	for (int i = 0; i < N; i++)
	{
		zombie[i].assign_name(name);
	}
	return (zombie);
}
