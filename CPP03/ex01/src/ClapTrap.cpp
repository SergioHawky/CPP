/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:38:40 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/09 22:26:17 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "ClapTrap Default has been created!" << std::endl;
	this->_name = "Default";
	this->_health = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "->[Clap Trap] Making a clone of " << src.getName() << " via copy constructor" << std::endl;
	_name = src._name;
	_health = src._health;
	_energy = src._energy;
	_damage = src._damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_health = src._health;
		this->_energy = src._energy;
		this->_damage = src._damage;
		std::cout << "->[Clap Trap] Making a clone of " << src.getName() << " via copy assignment operator" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << "->[Clap Trap] Destructor called! GG" << std::endl; };

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy <= 0)
	{
		std::cout << getName() << " can't attack, it's out of energy points!" << std::endl;
		return ;
	}
	else if (this->_health <= 0)
	{
		std::cout << getName() << " can't attack right now because he is dead." << std::endl;
		return ;
	}
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << getName() << " is already dead!" << std::endl;
		return ;
	}
	else if (amount >= static_cast<unsigned int>(this->_health))
	{
		this->_health = 0;
		std::cout << getName() << " has no health left!" << std::endl;
	}
	else
	{
		this->_health -= amount;
		std::cout << getName() << " has " << this->_health << " health left." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << getName() << " has died!" << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << getName() << " has no energy left!" << std::endl;
		return ;
	}
	else
	{
		this->_health += amount;
		this->_energy -= 1;
		std::cout << getName() << " got a refill of health of " << amount << " points!" << std::endl;
	}
}

std::string ClapTrap::getName() const
{
	return this->_name; 
}

int ClapTrap::getDamage() const
{
	return this->_damage; 
}
