/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:33:08 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/16 07:52:22 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "-> Brain Default Constructor called!" << std::endl;
};

Brain::Brain(const Brain &ct)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = ct.ideas[i];

	std::cout << "-> Brain Copy Constructor called!" << std::endl;
}

Brain &Brain::operator=(const Brain &ct)
{
	if (this != &ct)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = ct.ideas[i];
	}
	std::cout << "-> Brain Copy Assignment called!" << std::endl;
	return *this;
}

Brain::~Brain() { std::cout << "-> Brain Destructor called!" << std::endl; };

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}

void Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

