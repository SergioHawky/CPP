/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:35:44 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/09 18:26:11 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Batman");
	ClapTrap	b("Robin");

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	std::cout << std::endl;
	b.beRepaired(1);
	std::cout << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << std::endl;
	a.beRepaired(3);
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	std::cout << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << std::endl;
}
