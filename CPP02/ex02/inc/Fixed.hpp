/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:36:49 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/07 15:57:56 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_fixed;
		static const int	_bit;
	public:
		Fixed();
		Fixed(const int fix);
		Fixed(const float fl);
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);
		~Fixed();
		
		Fixed& operator++();
		Fixed  operator++(int nb);
		Fixed& operator--();
		Fixed  operator--(int nb);
		
		Fixed operator+(const Fixed& ref) const;
		Fixed operator-(const Fixed& ref) const;
		Fixed operator*(const Fixed& ref) const;
		Fixed operator/(const Fixed& ref) const;
		
		bool	operator>(const Fixed& ref) const;
		bool	operator<(const Fixed& ref) const;
		bool	operator>=(const Fixed& ref) const;
		bool	operator<=(const Fixed& ref) const;
		bool	operator==(const Fixed& ref) const;
		bool	operator!=(const Fixed& ref) const;
		
		static Fixed& min(Fixed& ref1, Fixed& ref2);
		static Fixed& max(Fixed& ref1, Fixed& ref2);
		static const Fixed& min(const Fixed& ref1, const Fixed& ref2);
		static const Fixed& max(const Fixed& ref1, const Fixed& ref2);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif