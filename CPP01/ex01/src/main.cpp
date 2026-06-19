/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:45:08 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/19 17:47:09 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	Zombie	*zomb;
	zomb = zombieHorde(5, "walker");
	for (int i = 0; i < 5; i++)
		zomb[i].announce();
	delete[] zomb;
	return 1;
}