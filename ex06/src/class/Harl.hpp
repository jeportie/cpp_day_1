/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:05:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/08 12:57:59 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
public:
	Harl(void);
	~Harl(void);

	void complain(std::string level) ;

private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
};

#endif  // ********************************************************* HARL_HPP //
