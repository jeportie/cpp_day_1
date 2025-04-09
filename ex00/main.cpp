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

void mixedZombieScenario()
{
    std::cout << "Creating a mix of stack and heap zombies..." << std::endl;
    randomChump("Bob");
    Zombie* heapZombie = newZombie("Antoine");
    heapZombie->announce();
    std::cout << "Deleting heap zombie manually..." << std::endl;
    delete heapZombie;
    std::cout << "Stack zombie goes out of scope and is destroyed." << std::endl;
}

int main(void)
{
    std::cout << BLUE << "Welcome to the Zombie Army! " << RESET << std::endl;

    std::cout << RED << "\n--- Stack Zombie Scenario ---" << RESET << std::endl;
    stackZombieScenario();

    std::cout << GREEN << "\n--- Heap Zombie Scenario ---" << RESET << std::endl;
    heapZombieScenario();

    std::cout << YELLOW <<"\n--- Mixed Zombie Scenario ---" << RESET << std::endl;
    mixedZombieScenario();

    std::cout << "\nAll zombies have been dealt with. It's the end of the zombie apocalypse!"
              << std::endl;
    return 0;
}
