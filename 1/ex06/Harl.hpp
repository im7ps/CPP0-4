/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 02:27:20 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 02:47:22 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
//Inizio file harl.hpp
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
	void shadowswitch(int d);

public:
	Harl();
	~Harl();
    void complain(std::string level);
};
#endif
//Fine file harl.hpp