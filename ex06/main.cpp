/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:58:42 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/14 02:20:52 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "It would be great if you could complain about something relevant please." << std::endl;
	return (0);
}