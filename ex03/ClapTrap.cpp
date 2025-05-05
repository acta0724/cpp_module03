/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:16 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 14:45:08 by kiwasa           ###   ########.fr       */
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
	std::cout << "ClapTrap \"" << this->_name << "\" copy-constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other){
		this->_name 		= other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints 	= other._hitPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap \"" << this->_name << "\" destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout	<< "Stop already, ClapTrap "
					<< _name << "'s life points are zero..." << std::endl;
	}
	else if (_energyPoints == 0) {
        std::cout << "ClapTrap " << _name << ", Let's go to the inn!!" << std::endl;
    }
	else {
		--_energyPoints;
		std::cout 	<< _name << " attacks " \
					<< target << ", causing " << _attackDamage \
					<< " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout	<< "Stop already, ClapTrap "
					<< _name << "'s life points are zero..." << std::endl;
	}
	else {
		unsigned int damage = amount > _hitPoints ? _hitPoints : amount;
		_hitPoints -= damage;
		if (_hitPoints == 0){
			std::cout << _name << " just died..." << std::endl;
		}
		else {
			std::cout 	<< _name << " takes " << damage \
						<< " points of damage! Hit points left: " \
						<< _hitPoints << std::endl;
		}	
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout	<< "Stop already, ClapTrap "
					<< _name << "'s life points are zero..." << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << ", Let's go to the inn!!" << std::endl;
	}
	else {
		--_energyPoints;
		_hitPoints += amount;
		std::cout 	<< _name << " repairs itself for " \
					<< amount << " hit points! Hit points now: " \
					<< _hitPoints << std::endl;
	}
}
