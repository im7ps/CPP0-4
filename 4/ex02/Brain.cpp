/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:47 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/07 21:02:12 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain inserted" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = "Biscuits\n";
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain deleted" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = cpy.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain& source)
{
	if (this != &source)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = source.ideas[i];
			i++;
		}
	}
	return *this;
}

std::string Brain::getIdea() const 
{
    return ideas[0];
}

void Brain::setIdea(const std::string& idea) 
{
    ideas[0] = idea;
}
