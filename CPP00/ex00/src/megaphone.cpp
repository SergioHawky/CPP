/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:02:33 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/22 15:30:59 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < ac; i++)
        {
            for (size_t j = 0; j < strlen(av[i]); j++)
            {
                av[i][j] = toupper((unsigned char)(av[i][j]));
            }
            std::cout << av[i];
            if (i < ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
