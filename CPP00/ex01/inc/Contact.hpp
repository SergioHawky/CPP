/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:46:52 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/03 16:54:14 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        std::string first;
        std::string last;
        std::string nick;
        std::string phone;
        std::string dark;
        int _isSet;
        
    public:
        Contact();
        void setContact(std::string f, std::string l, std::string n, std::string p, std::string d);
        void printContact();
        int  isEmpty();
        void printRow();
};

#endif