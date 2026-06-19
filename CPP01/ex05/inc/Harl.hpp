/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:05:34 by seilkiv           #+#    #+#             */
/*   Updated: 2026/06/19 18:05:35 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	std::string	_level[4];
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Harl();
	~Harl();

	void	complain(std::string level);
};

typedef	void (Harl::*fc)(void);