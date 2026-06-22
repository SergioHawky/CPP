/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:24:43 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/22 16:18:29 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    _isSet = 0;
}

void    Contact::setContact(std::string f, std::string l, std::string n, std::string p, std::string d)
{
    first = f;
    last = l;
    nick = n;
    phone = p;
    dark = d;
    _isSet = 1;
}

void    Contact::printRow() const
{
    std::string f = first;
    std::string l = last;
    std::string n = nick;

    if (f.length() > 10)
        f = f.substr(0, 9) + '.';
    if (l.length() > 10)
        l = l.substr(0, 9) + '.';
    if (n.length() > 10)
        n = n.substr(0, 9) + '.';
    std::cout << std::setw(10) << std::right << f << "|";
    std::cout << std::setw(10) << std::right << l << "|";
    std::cout << std::setw(10) << std::right << n << std::endl;
}

void    Contact::printContact() const
{
    std::cout << "----------Contact Info----------" << std::endl;
    std::cout << "First Name:      " << first << std::endl;
    std::cout << "Last Name:       " << last << std::endl;
    std::cout << "Nickname:        " << nick << std::endl;
    std::cout << "Phone Number:    " << phone << std::endl;
    std::cout << "Darkest Secret:  " << dark << std::endl;
    std::cout << "--------------------------------" << std::endl;
}

int     Contact::isEmpty() const
{
    if (_isSet)
        return (0);
    return (1);
}