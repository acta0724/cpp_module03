/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:43 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/05 15:09:42 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== DiamondTrapのテスト開始 ===" << std::endl;

	DiamondTrap defaultDiamond;
	std::cout << std::endl;

    DiamondTrap diamond("diamond");
	std::cout << std::endl;
    
    std::cout << "=== 攻撃 ===" << std::endl;
    diamond.attack("enemy");
    std::cout << std::endl;
    
    std::cout << "=== ダメージ ===" << std::endl;
    diamond.takeDamage(20);
    std::cout << std::endl;
    
    std::cout << "=== 回復 ===" << std::endl;
    diamond.beRepaired(10);
    std::cout << std::endl;
    
    std::cout << "=== ガードゲート ===" << std::endl;
    diamond.ScavTrap::guardGate();
    std::cout << std::endl;

	std::cout << "=== high5 ===" << std::endl;
    diamond.FragTrap::highFivesGuys();
    std::cout << std::endl;
    
	std::cout << "=== whoAmI ===" << std::endl;
    diamond.whoAmI();
    std::cout << std::endl;
	
    std::cout << "=== コピー ===" << std::endl;
    DiamondTrap diamond2(diamond);
    diamond2.whoAmI();
    std::cout << std::endl;
    
    std::cout << "=== コピー代入 ===" << std::endl;
    DiamondTrap diamond3("テスト");
    diamond3 = diamond;
    diamond3.whoAmI();
    std::cout << std::endl;
    
    std::cout << "=== DiamondTrapのテスト終了 ===" << std::endl;
    
    return 0;
}
