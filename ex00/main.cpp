/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:43:42 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 13:42:14 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap a("Apple");
	ClapTrap b = a;
	ClapTrap c("Cherry");

	c = a;
	a.attack("Banana");
	a.takeDamage(5);
	a.beRepaired(3);
	for (int i = 0; i < 10; ++i) {
		a.attack("Banana");
	}
	ClapTrap d("Durian");
	d.attack("Banana");
	d.takeDamage(5);
	d.takeDamage(5);
	d.takeDamage(5);
	d.attack("Banana");
	return 0;
}
