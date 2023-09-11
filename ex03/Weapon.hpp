/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:13:21 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 01:04:13 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include "HumanB.h"

class Weapon
{
	public:
		Weapon();
		~Weapon();
		Weapon(std::string _type);
		void			setType(std::string _type);
		const std::string		getType() const;

	private:
		std::string		type;
};

#endif
