/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:26:35 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/19 17:28:27 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

int	main()
{
	randomChump("walker");
	Zombie	*p = newZombie("muncher");
	p->announce();
	delete p;
	return 1;
}