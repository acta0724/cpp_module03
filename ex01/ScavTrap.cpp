/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:08 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 14:37:17 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap \"" << this->_name << "\" constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other) {
	std::cout << "ScavTrap \"" << this->_name << "\" copy-constructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap \"" << this->_name << "\" destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout	<< "Stop already, ScavTrap "
					<< _name << "'s life points are zero..." << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << ", Let's go to the inn!!" << std::endl;
    }
	else {
		--_energyPoints;
		std::cout 	<< _name << " attacks " \
					<< target << ", causing " << _attackDamage \
					<< " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap \"" << _name << \
		"\" is now in Gate keeper mode." << std::endl;
}
