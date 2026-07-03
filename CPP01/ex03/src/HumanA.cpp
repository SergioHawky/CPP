/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:56:37 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/02 20:25:19 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
	this->name = name;
	std::cout << this->name << " grabbed a " << this->_wp.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " died horribly" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->_wp.getType() << std::endl;
}