/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:24:46 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/03 17:09:44 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

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
        std::getline(std::cin, first);
    }
    while (last.empty())
    {
        std::cout << "Enter last name: ";
        std::getline(std::cin, last);
    }
    while (nick.empty())
    {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nick);
    }
    while (phone.empty())
    {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phone);
    }
    while (dark.empty())
    {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, dark);
    }

    contacts[count % 8].setContact(first, last, nick, phone, dark);
    count++;
    std::cout << "Contact added!" << std::endl;
}

void    PhoneBook::searchContact(void)
{
    int inp;

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
    std::cin >> std::ws >> inp;
    if (!std::cin || inp < 1 || inp > 8)
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid index!" << std::endl;
        return ;
    }
    if (contacts[inp - 1].isEmpty())
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "That slot is empty!" << std::endl;
        return ;
    }
    std::cin.ignore(1000, '\n');
    contacts[inp - 1].printContact();
}