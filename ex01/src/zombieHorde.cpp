/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:19:23 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 21:01:34 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.class.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* graveyard;

	graveyard = new Zombie[N];
	for (int i = 0; i < N; i++)
		graveyard[i].setName(name);
	return (graveyard);
}
