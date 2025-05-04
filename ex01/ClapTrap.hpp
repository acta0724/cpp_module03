/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:43:44 by iwasakatsuy       #+#    #+#             */
/*   Updated: 2025/05/04 18:36:20 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 protected:
 	std::string _name;
 	unsigned int _hitPoints;
 	unsigned int _energyPoints;
 	unsigned int _attackDamage;
 public:
 	ClapTrap(const std::string& name);
 	ClapTrap(const ClapTrap& other);
 	ClapTrap& operator=(const ClapTrap& other);
 	~ClapTrap();
 	void attack(const std::string& target);
 	void takeDamage(unsigned int amount);
 	void beRepaired(unsigned int amount);
};
#endif
