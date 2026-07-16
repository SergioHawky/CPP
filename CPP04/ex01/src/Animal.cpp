/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:33:05 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/16 06:45:49 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << "-> Animal Default Constructor called!" << std::endl;
};

Animal::Animal(std::string type) 
{
	std::cout << "-> Animal Constructor called!" << std::endl;
	this->_type = type;
};

Animal::Animal(const Animal &ct)
{
	_type = ct._type;
	std::cout << "-> Animal Copy Constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << "-> Animal Copy Assignment called!" << std::endl;
	return *this;
}

Animal::~Animal() { std::cout << "-> Animal Destructor called!" << std::endl; };

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound" << std::endl;
};

std::string Animal::getType() const
{
	return (this->_type);
}
