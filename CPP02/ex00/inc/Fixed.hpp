/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:33:23 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/07 15:57:51 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_fixed;
		static const int	_bit;
	public:
		Fixed();
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif