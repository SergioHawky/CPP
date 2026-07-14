/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:36:43 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/14 15:52:24 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &ct);
		Animal& operator=(const Animal &ct);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif
