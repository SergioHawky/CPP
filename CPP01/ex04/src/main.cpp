/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:02:44 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 11:48:53 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments, try again please" << std::endl;
        return 1;
    }

    Replacer file(av[1], av[2], av[3]);
    if (!file.run())
        return 1;

    std::cout << "File " << av[1] << ".replace created successfully and replaced \""
               << av[2] << "\" for \"" << av[3] << "\"" << std::endl;
    return 0;
}