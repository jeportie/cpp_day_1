/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:19:04 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 09:10:47 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType(void) const
{
	return (this->_type);
}

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon constructor called." << std::endl;
	this->setType(type);
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor called." << std::endl;
}
