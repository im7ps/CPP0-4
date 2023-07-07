/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:46:03 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/13 16:41:18 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TrapPhone.hpp"

int main()
{
    PhoneBook 	trapPhone;
	Contact		newContact;
	
    std::string input;
    int			index;
	
	std::cout << "Welcome to TrapPhone!\n\n";
    while (true) 
	{
        std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT\n";
        std::getline(std::cin, input);
        if (input == "ADD") 
		{
			std::cout << "Enter first name\n";
			std::getline(std::cin, input);
			newContact.setFirstName(input);
			
			std::cout << "Enter last name\n";
			std::getline(std::cin, input);
			newContact.setLastName(input);

			std::cout << "Enter nickname: \n";
			std::getline(std::cin, input);
			newContact.setNickname(input);

			std::cout << "Enter phone number: \n";
			std::getline(std::cin, input);
			newContact.setPhoneNumber(input);

			std::cout << "Gimme darkest secret: \n";
			std::getline(std::cin, input);
			newContact.setDarkestSecret(input);
			
			if (newContact.isEmpty())
			{
				std::cout << "You need to fill all fields sksk\n";
			}
			else
			{
				trapPhone.addContact(newContact);
			}
        }
        else if (input == "SEARCH") 
		{
			while (1)
			{
				trapPhone.displayContacts();
				if (trapPhone.get_numContacts() != 0)
				{
					std::cout << "Are you curious about somebody?if yes type index: \n";
					std::cin >> index;
					// pulisce il buffer di input del programma e scarta tutti i caratteri rimasti in esso dopo l'ultima lettura
					while (std::cin.get() != '\n');
					if (index < 0 || index >= (int) trapPhone.get_numContacts())
					{
						std::cout << "You were not so curious after all :/ \n" << std::endl;
						break ;
					}
					else
					{
						trapPhone.displayContact(index);
						break ;
					}	
				}	
			}
        }
        else if (input == "EXIT") 
		{
            std::cout << "Blue lights means its time to run sksk!\n";
            break;
        }
        else
		{
			if (input.empty())
			{
				;
			}
			else
			{
            	std::cout << "Invalid command, please try again.\n";
			}
        }
    }
    return 0;
}
