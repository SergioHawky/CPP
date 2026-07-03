/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:03:23 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 17:38:04 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replacer::~Replacer()
{}

bool Replacer::run()
{
    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cout << "Could not open file, aborting." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(input, line))
    {
        content += line;
        content += '\n';
    }
    input.close();

    if (s1.empty())
    {
        std::cout << "empty string, aborting" << std::endl;
        return false;
    }

    std::string::size_type p = 0;
    while ((p = content.find(s1, p)) != std::string::npos)
    {
        content.erase(p, s1.length());
        content.insert(p, s2);
        p += s2.length();
    }

    std::ofstream output((filename + ".replace").c_str());
    output << content;
    output.close();

    return true;
}