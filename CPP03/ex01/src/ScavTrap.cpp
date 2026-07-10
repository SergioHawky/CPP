/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:38:47 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/09 22:26:42 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	std::cout << "ScavTrap Default has been created!" << std::endl;
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been created!" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "->[Scav Trap] Making a clone of " << src.getName() << " via copy constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << "->[Scav Trap] Making a clone of " << src.getName() << " via copy assignment operator" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "->[Scav Trap] Destructor called! GG" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

