/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:04 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 14:19:59 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap scav("Scavvy");

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

    std::cout << "\n--- コピー／代入 テスト ---\n";
    ScavTrap st2 = st;
    st2.guardGate();

    ScavTrap st3("CopyMe");
    st3 = st;
    st3.guardGate();

    return 0;
}