/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:58:40 by npiya-is          #+#    #+#             */
/*   Updated: 2023/02/28 15:27:24 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	}
	else {
		for (int i = 1; i < argc; i++){
			std :: string str(argv[i]);
			for (int j = 0; j < int(str.length()); j++){
				char out = toupper(argv[i][j]);
				std :: cout << out;
			}
			if (i < argc - 1)
				std :: cout << " ";
		}
		std :: cout << "\n";
	}
	return (EXIT_SUCCESS);
}