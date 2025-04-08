/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:12:06 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/08 13:00:53 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

// constructor / destructor
Harl::Harl(void)
{
    std::cout << "Harl constructor called." << std::endl;
    return;
}

Harl::~Harl(void)
{
    std::cout << "Harl destructor called." << std::endl;
    return;
}

// public member functon
void Harl::complain(std::string level)
{
    void (Harl::* ftHarl[])(void) = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
    std::string flags[]           = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
    {
        if (flags[i] == level)
        {
            (this->*ftHarl[i])();
            return;
        }
    }
    return;
}

// private member functons
void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-specialketchup burger."
              << " I really do!" << std::endl;
    return;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! "
              << "If you did, I wouldn’t be asking for more!" << std::endl;
    return;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years, whereas you started working "
              << "here just last month." << std::endl;
    return;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return;
}
