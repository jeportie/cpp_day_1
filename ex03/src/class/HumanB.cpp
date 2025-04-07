/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:31:33 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 08:31:35 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
: _name(name)
, _weapon(NULL)
{
    std::cout << "HumanB constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void) { std::cout << "HumanB destructor called" << std::endl; }

void HumanB::attack(void) const
{
    std::cout	<< this->_name << " attacks with their "
				<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}
