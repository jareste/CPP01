/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 03:37:49 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 06:26:25 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie
{
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void			anounce(void);

	private:
		std::string		_name;
};