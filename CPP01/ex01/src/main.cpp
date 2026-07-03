/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:45:08 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/02 20:00:29 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int n = 5;
	Zombie	*zomb = zombieHorde(n, "walker");
	
	for (int i = 0; i < n; i++)
		zomb[i].announce();
	delete[] zomb;
	return 0;
}