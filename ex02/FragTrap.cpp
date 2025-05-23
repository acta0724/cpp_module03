/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:25 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 14:57:43 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name) 
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap \"" << this->_name << "\" constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other) {
	std::cout << "FragTrap \"" << this->_name << "\" copy-constructed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap \"" << this->_name << "\" destructed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout	<< "Stop already, FragTrap "
					<< _name << "'s life points are zero..." << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << "FragTrap " << _name << ", Let's go to the inn!!" << std::endl;
    }
	else {
		--_energyPoints;
		std::cout 	<< _name << " attacks " \
					<< target << ", causing " << _attackDamage \
					<< " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap \"" << _name << "\" requests a high five!" << std::endl;
}
