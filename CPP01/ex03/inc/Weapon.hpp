/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:05:57 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/02 20:24:17 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType() const;
		void		setType(std::string type);
};

#endif