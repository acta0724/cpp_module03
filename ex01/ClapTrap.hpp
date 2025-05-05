/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:43:44 by iwasakatsuy       #+#    #+#             */
/*   Updated: 2025/05/05 14:08:16 by kiwasa           ###   ########.fr       */
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
