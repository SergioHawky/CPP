/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:36:12 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/07 15:28:12 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

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

Fixed::Fixed(const int fix)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = fix << _bit;
}

Fixed::Fixed(const float fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(fl * (1 << _bit));
}

Fixed	&Fixed::operator=(const Fixed &ref)
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
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixed / (1 << _bit));
}

int		Fixed::toInt() const
{
	return (this->_fixed >> _bit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}