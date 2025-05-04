/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiwasa <kiwasa@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:43 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/03 18:53:47 by kiwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== DiamondTrapのテスト開始 ===" << std::endl;

    // DiamondTrapのインスタンス化
    DiamondTrap diamond("ダイヤモンド");
    
    // 各種メソッドのテスト
    diamond.attack("敵");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    
    // 継承した特殊能力のテスト
    diamond.ScavTrap::guardGate();
    diamond.FragTrap::highFivesGuys();
    
    // whoAmIメソッドのテスト
    diamond.whoAmI();
    
    // コピーコンストラクタのテスト
    DiamondTrap diamond2(diamond);
    diamond2.whoAmI();
    
    // 代入演算子のテスト
    DiamondTrap diamond3("テスト");
    diamond3 = diamond;
    diamond3.whoAmI();
    
    std::cout << "=== DiamondTrapのテスト終了 ===" << std::endl;
    
    return 0;
}
