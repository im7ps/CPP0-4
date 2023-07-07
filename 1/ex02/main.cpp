/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 06:23:51 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 06:28:24 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
  std::string str = "HI THIS IS BRAIN";   // Creazione della stringa
  std::string* stringPTR = &str;         // Creazione del puntatore alla stringa
  std::string& stringREF = str;          // Creazione del riferimento alla stringa
  
  // Stampa del valore e dell'indirizzo della stringa, del puntatore e del riferimento
  std::cout << "Valore della stringa: " << str << std::endl;
  std::cout << "Indirizzo della stringa: " << &str << std::endl;
  std::cout << "Valore del puntatore: " << stringPTR << std::endl;
  std::cout << "Indirizzo del puntatore: " << &stringPTR << std::endl;
  std::cout << "Valore del riferimento: " << stringREF << std::endl;
  std::cout << "Indirizzo del riferimento: " << &stringREF << std::endl;
  
  return 0;
}
