/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:39:38 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/10 12:52:32 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap frag("Cyborg");
    std::cout << std::endl;

    std::cout << "=== Combat basics ===" << std::endl;
    ClapTrap enemy("Batman");
    frag.attack(enemy.getName());
    enemy.takeDamage(frag.getDamage());
    std::cout << std::endl;

    std::cout << "=== highFiveGuys ===" << std::endl;
    frag.highFiveGuys();
    std::cout << std::endl;

    std::cout << "=== Copy constructor ===" << std::endl;
    FragTrap fragClone(frag);
    fragClone.attack(enemy.getName());
    std::cout << std::endl;

    std::cout << "=== Copy assignment operator ===" << std::endl;
    FragTrap fragAssigned("TempName");
    fragAssigned = frag;
    fragAssigned.attack(enemy.getName());
    std::cout << std::endl;

    std::cout << "=== Energy exhaustion (100 energy) ===" << std::endl;
    FragTrap energyTest("Robin");
    for (int i = 0; i < 101; i++)
        energyTest.attack("dummy");
    std::cout << std::endl;

    std::cout << "=== Health exhaustion ===" << std::endl;
    FragTrap fragileTest("Alfred");
    fragileTest.takeDamage(150);
    fragileTest.attack("dummy");
    fragileTest.beRepaired(10);
    std::cout << std::endl;

    std::cout << "=== Static binding via base pointer (non-virtual attack) ===" << std::endl;
    ClapTrap* basePtr = new FragTrap("Joker");
    basePtr->attack(enemy.getName());
    delete basePtr;
    std::cout << std::endl;

    std::cout << "=== ScavTrap vs FragTrap side-by-side (comparing damage) ===" << std::endl;
    ScavTrap scav("Superman");
    scav.attack(enemy.getName());
    frag.attack(enemy.getName());
    std::cout << std::endl;

    std::cout << "=== Destruction order ===" << std::endl;
    return 0;
}
