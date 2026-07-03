/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:56:40 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 11:28:36 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->name = n;
	this->_wp = NULL;
}

HumanB::~HumanB()
{
	std::cout << this->name << " died horribly" << std::endl;
}

void	HumanB::attack()
{
	if (this->_wp == NULL)
		std::cout << this->name << " is going in with their bare fists!!" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->_wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->_wp = &wp;
	std::cout << this->name << " grabbed a " << this->_wp->getType() << std::endl;
}