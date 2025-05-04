/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwasakatsuya <iwasakatsuya@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:28 by kiwasa            #+#    #+#             */
/*   Updated: 2025/05/04 19:19:01 by iwasakatsuy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ScavTrap {
 public:
 	FragTrap(const std::string& name);
 	FragTrap(const FragTrap& other);
 	FragTrap& operator=(const FragTrap& other);
 	virtual ~FragTrap();
 	void attack(const std::string& target);
 	void highFivesGuys(void);
};

#endif