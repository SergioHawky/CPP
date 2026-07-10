/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:35:38 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/09 19:03:32 by seilkiv          ###   ########.fr       */
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
	
ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "-> Making a clone of " << ct._name << " via copy constructor" << std::endl;
	_name = ct._name;
	_health = ct._health;
	_energy = ct._energy;
	_damage = ct._damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_health = ct._health;
		this->_energy = ct._energy;
		this->_damage = ct._damage;
		std::cout << "-> Making a clone of " << ct._name << " via copy assignment operator" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << "-> ClapTrap Destructor called! GG" << std::endl; };

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