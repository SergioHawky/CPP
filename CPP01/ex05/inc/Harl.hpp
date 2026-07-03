/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:05:34 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/02 20:29:35 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
	std::string	level[4];
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

#endif
