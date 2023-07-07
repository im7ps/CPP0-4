/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:21:41 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 05:23:29 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    // crea una horde di 3 Zombie
    Zombie* horde = zombieHorde(3, "Flate_earthers");

    // chiama announce per ogni Zombie
    for (int i = 0; i < 3; i++) {
        horde[i].announce();
    }

    // cancella la horde e verifica eventuali memory leaks
    delete[] horde;
    return 0;
}
