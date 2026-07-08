/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:37:15 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/07 15:59:42 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int	Fixed::_bit = 8;

Fixed::Fixed()
{
	this->_fixed = 0;
}

Fixed::Fixed(const Fixed& ref)
{
	this->_fixed = ref.getRawBits();
}

Fixed::Fixed(const int fix)
{
	this->_fixed = fix << this->_bit;
}

Fixed::Fixed(const float fl)
{
	this->_fixed = roundf(fl * (1 << this->_bit));
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	this->_fixed = ref.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

Fixed	Fixed::operator+(const Fixed& ref) const
{
	return Fixed(this->toFloat() + ref.toFloat());
}

Fixed	Fixed::operator-(const Fixed& ref) const
{
	return Fixed(this->toFloat() - ref.toFloat());
}

Fixed	Fixed::operator*(const Fixed& ref) const
{
	return Fixed(this->toFloat() * ref.toFloat());
}

Fixed	Fixed::operator/(const Fixed& ref) const
{
	return Fixed(this->toFloat() / ref.toFloat());
}

bool		Fixed::operator>(const Fixed& ref) const
{
	return (this->_fixed > ref._fixed);
}

bool		Fixed::operator<(const Fixed& ref) const
{
	return (this->_fixed < ref._fixed);
}

bool		Fixed::operator>=(const Fixed& ref) const
{
	return (this->_fixed >= ref._fixed);
}

bool		Fixed::operator<=(const Fixed& ref) const
{
	return (this->_fixed <= ref._fixed);
}

bool		Fixed::operator==(const Fixed& ref) const
{
	return (this->_fixed == ref._fixed);
}

bool		Fixed::operator!=(const Fixed& ref) const
{
	return (this->_fixed != ref._fixed);
}

Fixed&	Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int nb)
{
	(void)nb;
	Fixed tp(*this);
	this->_fixed++;
	return tp;
}

Fixed&	Fixed::operator--()
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int nb)
{
	(void)nb;
	Fixed tp(*this);
	this->_fixed--;
	return tp;
}

Fixed&	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 < ref2)
		return ref1;
	return ref2;
}

Fixed const &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 < ref2)
		return ref1;
	return ref2;
}

Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 > ref2)
		return ref1;
	return ref2;
}

Fixed const &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 > ref2)
		return ref1;
	return ref2;
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
	return ((float)this->getRawBits() / (1 << this->_bit));
}

int		Fixed::toInt() const
{
	return (this->getRawBits() >> this->_bit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}