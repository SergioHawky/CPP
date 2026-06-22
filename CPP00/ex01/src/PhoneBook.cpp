/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:24:46 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/22 16:38:48 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
}

void    PhoneBook::addContact(void)
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string dark;

    while (first.empty())
    {
        std::cout << "Enter first name: ";
        if (!std::getline(std::cin, first))
            return ;
    }
    while (last.empty())
    {
        std::cout << "Enter last name: ";
        if (!std::getline(std::cin, last))
            return ;
    }
    while (nick.empty())
    {
        std::cout << "Enter nickname: ";
        if (!std::getline(std::cin, nick))
            return ;
    }
    while (phone.empty())
    {
        std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, phone))
            return ;
    }
    while (dark.empty())
    {
        std::cout << "Enter darkest secret: ";
        if (!std::getline(std::cin, dark))
            return ;
    }

    contacts[count % 8].setContact(first, last, nick, phone, dark);
    count++;
    std::cout << "Contact added!" << std::endl;
}

void    PhoneBook::searchContact(void)
{
    int indice;

    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].isEmpty())
            continue ;
        std::cout << std::setw(10) << std::right << i + 1 << "|";
        contacts[i].printRow();
    }
    std::cout << "Enter index >> ";
    std::cin >> std::ws >> indice;
    if (!std::cin || indice < 1 || indice > 8)
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid index!" << std::endl;
        return ;
    }
    if (contacts[indice - 1].isEmpty())
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "That slot is empty!" << std::endl;
        return ;
    }
    std::cin.ignore(1000, '\n');
    contacts[indice - 1].printContact();
}