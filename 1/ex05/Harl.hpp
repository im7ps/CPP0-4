/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:08:40 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 02:49:05 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inizio file harl.hpp
#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class Harl {
private:
	void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};
#endif
//Fine file harl.hpp