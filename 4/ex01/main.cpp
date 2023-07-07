/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:31:28 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/07 20:58:44 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main() {
    Dog dog1;
    Dog dog2(dog1);

    dog1.getBrain()->setIdea("New idea\n");

    std::cout << "Dog1's first idea: " << dog1.getBrain()->getIdea() << std::endl;
    std::cout << "Dog2's first idea: " << dog2.getBrain()->getIdea() << std::endl;

    return 0;
}
