/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 08:55:13 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 19:55:58 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/Zombie.hpp"
#include "include/colors.hpp"
#include <iostream>

void stackZombieScenario()
{
    std::cout << "Creating a stack zombie..." << std::endl;
    randomChump("Bob");
    std::cout << "Bob goes out of scope and is destroyed." << std::endl;
}

void heapZombieScenario()
{
    std::cout << "Creating a heap zombie..." << std::endl;
    Zombie* heapZombie = newZombie("Antoine");
    heapZombie->announce();
    std::cout << "Deleting Antoine manually..." << std::endl;
    delete heapZombie;
}

int main(void)
{
    std::cout << RED << "--- Stack Zombie Scenario ---" << RESET << std::endl;
    stackZombieScenario();
    std::cout << GREEN << "\n--- Heap Zombie Scenario ---" << RESET << std::endl;
    heapZombieScenario();

    return 0;
}
