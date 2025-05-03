/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:43:45 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/03 23:53:01 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_HPP
# define CLAP_HPP

#include <iostream>

class ClapTrap {
 private:
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
	// int getHitPoint(void) const;
	// int getEnergyPoint(void) const;
	// int getAttackPoint(void) const;
	// std::string getName(void) const;
	// void setEnergyPoint(int energyPoint);
};

#endif