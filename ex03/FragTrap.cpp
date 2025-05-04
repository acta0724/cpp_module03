/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:25 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 18:57:56 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name) 
	: ClapTrap(name), ScavTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap \"" << this->_name << "\" constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other), ScavTrap(other) {
	std::cout << "FragTrap \"" << this->_name << "\" copy-constructed\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	ScavTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap \"" << this->_name << "\" destructed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout << "FragTrap \"" << _name \
			<< "\" has no hit points left and cannot be repaired!" << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << "FragTrap \"" << _name \
			<< "\" has no energy points left and cannot be repaired!\n";
	}
	else {
		--_energyPoints;
		std::cout << _name << " attacks " \
			<< target << ", causing " << _attackDamage \
			<< " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap \"" << _name << "\" requests a high five!" << std::endl;
}
