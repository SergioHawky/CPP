/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:32:16 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/14 15:52:24 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << ".WrongCat Default Constructor called!" << std::endl;
};

WrongCat::WrongCat(const WrongCat &ct) : WrongAnimal(ct)
{
	_type = ct._type;
	std::cout << ".WrongCat Copy Constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".WrongCat Copy Assignment Operator called!" << std::endl;
	return *this;
}

WrongCat::~WrongCat() { std::cout << ".WrongCat Destructor called!" << std::endl; };

void WrongCat::makeSound() const
{
	std::cout << "Meow, Meow" << std::endl;
}

