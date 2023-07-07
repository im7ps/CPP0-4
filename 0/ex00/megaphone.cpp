/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:01:29 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/07 23:37:26 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	std::string input;

	if (argc == 1)
	{
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	
	int i = 1;
	while (i < argc)
	{
		input = input + std::string(argv[i]);
		if (i < argc - 1)
		{
			input = input + " ";
		}
		i++;
	}

	std::string::iterator index;
	index = input.begin();
	while (index != input.end())
	{
		if (*index >= 'a' && *index <= 'z')
		{
			*index = *index - 'a' + 'A';
		}
		++index;
	}

	std::cout << input << std::endl;
	return (0);
}
