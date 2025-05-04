/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:13 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 19:19:07 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
 	ScavTrap(const std::string& name);
 	ScavTrap(const ScavTrap& other);
 	ScavTrap& operator=(const ScavTrap& other);
 	virtual ~ScavTrap();
 	void attack(const std::string& target);
 	void guardGate();
};

#endif
