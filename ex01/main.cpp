/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 03:37:34 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 19:16:43 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	int	N;
	std::string	name = "Hola";
	N = 10;
	Zombie	*zombie_test = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
	{
		zombie_test[i].anounce();
	}
	delete	[] zombie_test;
}
