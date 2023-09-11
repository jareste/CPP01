/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:13:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 01:01:32 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class HumanB
{
	public:
		HumanB(std::string _name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon &_weapon);

	private:
		Weapon			*weapon;
		std::string		name;
		bool			has_weapon;
};

#endif