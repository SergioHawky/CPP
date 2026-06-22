/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:24:39 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/22 15:48:24 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phonebook;
    
    std::cout << "*---------------------------------*" << std::endl;
    std::cout << "|     Welcome to the PhoneBook    |" << std::endl;
    std::cout << "*---------------------------------*" << std::endl;
    std::cout << std::endl;

    while (1)
    {
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): " << std::endl;
        std::cout << ">> ";
        std::getline(std::cin, input);
        if (!std::cin)
        {
            std::cerr << "Error reading input." << std::endl;
            break;
        }
        else if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContact();
        else if (input == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    
    return 0;
}
    