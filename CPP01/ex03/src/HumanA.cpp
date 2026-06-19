/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:56:37 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/19 17:59:17 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
	this->_name = name;
	std::cout << _name << " grabbed a " << _wp.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << " died horribly" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << this->_wp.getType() << std::endl;
}