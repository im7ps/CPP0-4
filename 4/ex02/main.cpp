/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:31:28 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/07 21:40:59 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

int main() {
    // Creazione di un puntatore a Animal
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    // Chiamata al metodo makeSound
    dog->makeSound();
    cat->makeSound();

    // Test della copia profonda
    Dog* another_dog = new Dog(*(dynamic_cast<Dog*>(dog)));
    another_dog->makeSound();

    Cat* another_cat = new Cat(*(dynamic_cast<Cat*>(cat)));
    another_cat->makeSound();

    // Eliminazione degli oggetti
    delete dog;
    delete cat;
    delete another_dog;
    delete another_cat;

    return 0;
}

