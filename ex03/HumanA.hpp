/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:52:28 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 00:46:24 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanB.h"
# include <iostream>
// # include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string _name, Weapon *_weapon);
		~HumanA();
		void		attack(void);

	private:
		Weapon			*weapon;
		std::string		name;
};

#endif