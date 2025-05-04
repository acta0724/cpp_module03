/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:39 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 18:21:34 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {
 private:
 	std::string _name;
 public:
	DiamondTrap(void);
 	DiamondTrap(const std::string& name);
 	DiamondTrap(const DiamondTrap& other);
 	DiamondTrap& operator=(const DiamondTrap& other);
 	virtual ~DiamondTrap(void);
	void whoAmI(void);
	void attack(const std::string& target);
};

#endif
