/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:56:40 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/19 17:59:31 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_wp = NULL;
}

HumanB::~HumanB()
{
	std::cout << _name << " died horribly" << std::endl;
}

void	HumanB::attack()
{
	if (this->_wp == NULL)
		std::cout << _name << " is going in with their bare fists!!" << std::endl;
	else
		std::cout << _name << " attacks with their " << this->_wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->_wp = &wp;
	std::cout << _name << " grabbed a " << _wp->getType() << std::endl;
}