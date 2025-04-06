/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 21:43:33 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 21:44:11 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    // Initialize a string variable
    std::string brain = "HI THIS IS BRAIN";

    // Create a pointer to the string
    std::string* stringPTR = &brain;

    // Create a reference to the string
    std::string& stringREF = brain;

    // Print the memory addresses
    std::cout << "Memory address of the string variable: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Print the values
    std::cout << "Value of the string variable: " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
