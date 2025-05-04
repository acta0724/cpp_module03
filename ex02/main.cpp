/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:32 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 17:31:08 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- ClapTrap テスト ---\n";
    ClapTrap ct("Base");
    ct.attack("Enemy");
    ct.takeDamage(20);
    ct.beRepaired(5);

    std::cout << "\n--- ScavTrap テスト ---\n";
    ScavTrap st("Guardian");
    st.attack("Intruder");
    st.takeDamage(30);
    st.beRepaired(10);
    st.guardGate();

    std::cout << "\n--- FragTrap テスト ---\n";
    FragTrap ft("Warrior");
    ft.attack("Boss");
    ft.takeDamage(50);
    ft.beRepaired(15);
    ft.highFivesGuys();

    std::cout << "\n--- コピー／代入 テスト ---\n";
    FragTrap ft2 = ft;
    ft2.highFivesGuys();

    FragTrap ft3("CopyMe");
    ft3 = ft;
    ft3.highFivesGuys();

    return 0;
}
