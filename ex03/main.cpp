/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:06 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 01:01:13 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

int	main(void)
{
	Weapon navajilla = Weapon("la navajilla primo");

	HumanA bob("bob", navajilla);
	bob.attack();
	navajilla.setType("un pistolon");
	bob.attack();

	HumanB Jose("Jose");
	Jose.attack();
	Jose.setWeapon(navajilla);
	Jose.attack();
	navajilla.setType("con un papel");
	bob.attack();
	Jose.attack();
}
