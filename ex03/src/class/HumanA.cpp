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

HumanA::HumanA(std::string name, Weapon weapon)
{
	Weapon thisWeapon;

	this->_name = name;
	this->_weapon = weapon;
	return ;
}
