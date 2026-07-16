/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:33:35 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/16 06:53:31 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "-> WrongAnimal Default Constructor called!" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) 
{
	std::cout << "-> WrongAnimal Constructor called!" << std::endl;
	this->_type = type;
};

WrongAnimal::WrongAnimal(const WrongAnimal &ct)
{
	_type = ct._type;
	std::cout << "-> WrongAnimal Copy Constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << "-> WrongAnimal Copy Assignment called!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << "-> WrongAnimal Destructor called!" << std::endl; };

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound: Quack, woof, meow, boink" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
