/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:35 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 15:14:04 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
	: ClapTrap("default_clap"),
	  ScavTrap("default_scav"),
	  FragTrap("default_frag") {
		this->_name = "default";
		this->ClapTrap::_name = this->_name + "_clap_name";
		this->_hitPoints = FragTrap::_hitPoints;
		this->_energyPoints = ScavTrap::_energyPoints;
		this->_attackDamage = FragTrap::_attackDamage;
		std::cout << "DiamondTrap \"" << this->_name << "\" default constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap"),
	  ScavTrap(name + "_scav"),
	  FragTrap(name + "_frag") {
		this->_name = name;
		this->_hitPoints = FragTrap::_hitPoints;
		this->_energyPoints = ScavTrap::_energyPoints;
		this->_attackDamage = FragTrap::_attackDamage;
		std::cout << "DiamondTrap \"" << this->_name << "\" constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other),
	  ScavTrap(other),
	  FragTrap(other) {
		this->_name = other._name;
		std::cout << "DiamondTrap \"" << this->_name << "\" copy-constructed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap \"" << this->_name << "\" destructed" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am a DiamondTrap \"" << this->_name 
		<< "\" and a ClapTrap \"" << this->ClapTrap::_name << "\"" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}
