/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:35:42 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 19:04:14 by seilkiv          ###   ########.fr       */
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

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif