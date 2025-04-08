/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:24:57 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/08 13:25:49 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/Harl.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <log level>" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);
    return 0;
}
