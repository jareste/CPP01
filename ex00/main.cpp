/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 03:37:34 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 18:50:42 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie	*zombie_test = newZombie("hola");
	zombie_test->anounce();

	randomChump("Juan");
	randomChump("Bob");
	delete	zombie_test;
}
