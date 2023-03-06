/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:37:04 by npiya-is          #+#    #+#             */
/*   Updated: 2023/03/06 14:57:30 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::fstream file;
	std::string		line;
	std::string		newline;
	int				i = 0;
	if (argc == 4)
	{
		file.open(argv[1], std::ios::in | std::ios::out);
		if (file.is_open())
		{
			while (getline(file, line))
				newline.append(line);
		}
		file.close();
		file.open(argv[1], std::ios::out | std::ios::trunc);
		while (newline[i])
		{
			if (newline.compare(i, std::string(argv[2]).length(), argv[2]) == 0)
			{
				file << argv[3];
				i += std::string(argv[2]).length();
				continue ;
			}
			else
				file << newline[i];
			i++;
		}
		// file << std::endl;
		file.close();
	}
}