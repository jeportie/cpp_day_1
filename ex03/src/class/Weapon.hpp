/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:11:42 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 09:10:12 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
	const std::string& getType(void) const;
	void setType(std::string type);

	Weapon(std::string type);
	~Weapon(void);

private:
	std::string _type;
};

#endif  // ******************************************************* WEAPON_HPP //
