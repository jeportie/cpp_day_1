/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 08:55:03 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/06 17:18:15 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# define SOUND "BraiiiiiiinnnzzzZ..."
# include <string>

class Zombie
{
public:
	void announce(void);
	void setName(std::string name);

    Zombie(void);
    ~Zombie(void);

private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // ************************************************** ZOMBIE_CLASS_HPP //
