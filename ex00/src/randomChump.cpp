/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:13:59 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 17:16:03 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie stackZombie;

    stackZombie.setName(name);
    stackZombie.announce();
}
