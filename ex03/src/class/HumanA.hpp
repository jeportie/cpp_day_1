/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:30:08 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 09:22:19 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
public:
	void attack(void);

    HumanA(std::string name, Weapon weapon);
    ~HumanA(void);

private:
	std::string	_name;
	Weapon		_weapon;
};

#endif  // ******************************************************* HUMANA_HPP //
