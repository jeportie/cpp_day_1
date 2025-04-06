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

#include "src/class/Zombie.class.hpp"
#include <iostream>

void stackZombieScenario()
{
    std::cout << "Creating a stack zombie..." << std::endl;
    randomChump("Stacky");
    std::cout << "Stack zombie goes out of scope and is destroyed." << std::endl;
}

void heapZombieScenario()
{
    std::cout << "Creating a heap zombie..." << std::endl;
    Zombie* heapZombie = newZombie("Heapy");
    heapZombie->announce();
    std::cout << "Deleting heap zombie manually..." << std::endl;
    delete heapZombie;
}

void mixedZombieScenario()
{
    std::cout << "Creating a mix of stack and heap zombies..." << std::endl;
    randomChump("StackyMix");
    Zombie* heapZombie = newZombie("HeapyMix");
    heapZombie->announce();
    std::cout << "Deleting heap zombie manually..." << std::endl;
    delete heapZombie;
    std::cout << "Stack zombie goes out of scope and is destroyed." << std::endl;
}

int main(void)
{
    std::cout << "Welcome to the Zombie Army! " << std::endl;

    std::cout << "\n--- Stack Zombie Scenario ---" << std::endl;
    stackZombieScenario();

    std::cout << "\n--- Heap Zombie Scenario ---" << std::endl;
    heapZombieScenario();

    std::cout << "\n--- Mixed Zombie Scenario ---" << std::endl;
    mixedZombieScenario();

    std::cout << "\nAll zombies have been dealt with. It's the end of the zombie apocalypse!"
              << std::endl;
    return 0;
}
