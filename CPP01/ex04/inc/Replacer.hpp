/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:05:43 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/03 11:49:30 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replacer
{
private:
    std::string     filename;
    std::string     s1;
    std::string     s2;
    std::string     content;

public:
    Replacer(std::string filename, std::string s1, std::string s2);
    ~Replacer();

    bool    run();
};

#endif
