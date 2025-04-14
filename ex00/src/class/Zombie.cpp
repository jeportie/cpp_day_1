/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 08:54:55 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 17:16:17 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "A new corpse was summoned from the dead" << std::endl;
    return;
}

Zombie::Zombie(std::string name)
: _name(name)
{
    std::cout << this->_name << " was summoned from the dead" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " returned to the ground" << std::endl;
    return;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": " << SOUND << std::endl;
    return;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
    return;
}
