/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:33:00 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/14 15:52:24 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
		WrongCat();
		WrongCat(const WrongCat &ct);
		WrongCat& operator=(const WrongCat &ct);
		~WrongCat();

		void makeSound() const;
};

#endif
