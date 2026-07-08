/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:33:50 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/07 15:11:38 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bit = 8;

Fixed::Fixed()
{
	this->_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = ref.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ref)
		this->_fixed = ref.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}