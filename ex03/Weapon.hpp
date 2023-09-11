/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:13:21 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/12 00:41:42 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

class Weapon
{
	public:
		Weapon();
		~Weapon();
		Weapon(std::string _type);
		void			setType(std::string _type);
		std::string		getType(void);

	private:
		std::string		type;
};
