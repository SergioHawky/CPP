/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:38:43 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/10 12:51:53 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap    a("Batman");
    ClapTrap    b("Robin");
    ScavTrap    c("Superman");

    std::cout << "\n=== Basic combat ===" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getDamage());
    std::cout << std::endl;
    b.beRepaired(1);
    std::cout << std::endl;
    b.attack(a.getName());
    a.takeDamage(b.getDamage());
    std::cout << std::endl;
    a.beRepaired(3);

    std::cout << "\n=== ScavTrap special attack (damage 20) ===" << std::endl;
    c.attack(b.getName());
    c.attack(a.getName());
    a.takeDamage(c.getDamage());
    b.takeDamage(c.getDamage());
    std::cout << std::endl;
    a.beRepaired(1);
    b.beRepaired(1);

    std::cout << "\n=== guardGate ===" << std::endl;
    c.guardGate();
	//a.guardGate(); 

    std::cout << "\n=== Energy exhaustion ===" << std::endl;
    ScavTrap energyTest("Flash");
    for (int i = 0; i < 51; i++)
        energyTest.attack("dummy");

    std::cout << "\n=== Health exhaustion ===" << std::endl;
    ScavTrap fragileTest("Alfred");
    fragileTest.takeDamage(200);
    fragileTest.attack("dummy");
    fragileTest.beRepaired(10);

    std::cout << "\n=== Static binding via base pointer (non-virtual) ===" << std::endl;
    ClapTrap* d = new ScavTrap("Joker");
    d->attack(a.getName());
    delete d;

    std::cout << "\n=== Destruction order ===" << std::endl;
    return 0;
}
