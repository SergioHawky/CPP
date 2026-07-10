/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:39:33 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/09 19:02:49 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
	std::cout << "FragTrap Default has been created!" << std::endl;
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " has been created!" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "->[Frag Trap] Making a clone of " << src.getName() << " via copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << "->[Frag Trap] Making a clone of " << src.getName() << " via copy assignment operator" << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "->[Frag Trap] Destructor called! GG" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << getName() << " is HIGH FIVING EVERYONE!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_energy <= 0)
	{
		std::cout << getName() << " can't attack, it's out of energy points!" << std::endl;
		return ;
	}
	if (this->_health <= 0)
	{
		std::cout << getName() << " can't attack right now because he is dead." << std::endl;
		return ;
	}
	else
	{
		this->_energy--;
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

