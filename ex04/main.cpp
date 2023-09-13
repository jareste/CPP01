/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:06:18 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/13 23:27:46 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"

std::string	fill_out_file(std::string in_content, const std::string &s_new, const std::string &s_old)
{
	int				pos;
	int				old_len = s_old.length();
	std::string		definitly;
	
	while (42)
	{
		pos = in_content.find(s_old);
		if (pos < 0)
			break ;
		definitly += in_content.substr(0, pos);
		definitly += s_new;
		in_content.erase(0, pos + old_len);
	}
	definitly += in_content;
	return (definitly);
}

void	search_and_replace(std::string filename, const std::string &s_old, const std::string &s_new)
{
	std::ifstream 	in_file(filename);
	std::string 	new_name = filename;
	new_name.append(".replace");
	std::ofstream 	out_file(new_name);
	std::string 	in_content;
	std::string 	line;

	if (in_file.fail())
		return (std::cerr << "Error : " << std::strerror(errno) << std::endl, (void) 1);
	if (out_file.fail())
		return (std::cerr << "Error : " << std::strerror(errno) << std::endl, (void) 1);
	while (std::getline(in_file, line))
		in_content += line.append(1, '\n');
	if (out_file.is_open())
		out_file << fill_out_file(in_content, s_new, s_old);
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	tosearch;
	std::string	toreplace;

	if (argc != 4)
		std::cerr << INCORRECT_INPUT << std::endl;
	filename = argv[1];
	tosearch = argv[2];
	toreplace = argv[3];
	search_and_replace(filename, tosearch, toreplace);
	return (0);
}