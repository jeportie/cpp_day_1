/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:10:17 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 21:23:51 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/Zombie.class.hpp"

void makeThemSpeak(Zombie* horde, int N)
{
    for (int i = 0; i < N; i++)
        horde[i].announce();
}

int main(void)
{
    Zombie* graveyard;
    int     N;

    N         = 5;
    graveyard = zombieHorde(N, "boys");
	makeThemSpeak(graveyard, N);
    delete[] graveyard;
    return (0);
}
