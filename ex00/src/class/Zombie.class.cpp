/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 08:54:55 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 08:54:56 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << this->_name << " was summoned from the dead" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " returned to the ground" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": " << SOUND << std::endl;
    return;
}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* newcomer;

    newcomer    = new Zombie();
    this->_name = name;
    return (newcomer);
}

void Zombie::randomChump(std::string name)
{
    Zombie newcomer;
	this->_name = name;
	newcomer.announce();
	return ;
}
