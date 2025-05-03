/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:43:49 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 00:11:42 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) 
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap \"" << this->_name << "\" constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name),
	  _hitPoints(other._hitPoints),
	  _energyPoints(other._energyPoints),
	  _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap \"" << this->_name << "\" copy-constructed\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap \"" << this->_name << "\" destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap \"" << _name << "\" has no hit points left and cannot be repaired!" << std::endl;
	}
	else if (_energyPoints == 0) {
        std::cout << "ClapTrap \"" << _name << "\" has no energy points left and cannot be repaired!\n";
    }
	std::cout << _name << " attacks " \
		<< target << ", causing " << _attackDamage \
		<< " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::beRepaired(unsigned int amount) {
	
}