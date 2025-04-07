/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:30:27 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 09:29:43 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
public:
	void attack(void) const;
	void setWeapon(Weapon& weapon);

    HumanB(std::string name);
    ~HumanB(void);

private:
	std::string	_name;
	Weapon*		_weapon;
};


#endif  // ******************************************************* HUMANB_HPP //
