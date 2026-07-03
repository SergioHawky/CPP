/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:04:55 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 17:59:04 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "Usage: ./harl <level> \t{ DEBUG | INFO | WARNING | ERROR }" << std::endl;
		return 1;
	}
	
	Harl harl;
    harl.complain(av[1]);
	
	return 0;
}