/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:31:27 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 10:15:01 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name)
, _weapon(weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
	return ;
}

HumanA::~HumanA(void) { std::cout << "HumanA destructor called" << std::endl; }

void HumanA::attack(void) const
{
    std::cout	<< this->_name << " attacks with their "
				<< this->_weapon.getType() << std::endl;
}
