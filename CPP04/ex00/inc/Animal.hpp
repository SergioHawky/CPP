/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:31:35 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/16 07:12:12 by seilkiv          ###   ########.fr       */
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
		Animal(std::string type);
		Animal(const Animal &ct);
		Animal& operator=(const Animal &ct);
		virtual ~Animal();

		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif
