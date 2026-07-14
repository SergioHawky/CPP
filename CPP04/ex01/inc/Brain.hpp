/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:32:39 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/14 15:52:24 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &ct);
		Brain& operator=(const Brain &ct);
		virtual ~Brain();

		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
};

#endif
