/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:04:43 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 17:13:43 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.class.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* newcomer;

    newcomer    = new Zombie();
	newcomer->setName(name);
    return (newcomer);
}
