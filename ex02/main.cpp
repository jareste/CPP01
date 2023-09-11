/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:51:19 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/11 19:59:23 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "STR address : " << &str << std::endl;
	std::cout << "PTR address : " << &stringPTR << std::endl;
	std::cout << "REF address : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "STR value : " << str << std::endl;
	std::cout << "PTR value : " << stringPTR << std::endl;
	std::cout << "REF value : " << stringREF << std::endl;
	return (0);
}
