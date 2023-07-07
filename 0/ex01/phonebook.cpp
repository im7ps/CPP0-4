/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:23:17 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/08 01:46:54 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TrapPhone.hpp"

void PhoneBook::addContact(const Contact& contact) {
	int i = 1;
	if (m_numContacts == 8) {
		while (i < 8) 
		{
			m_contacts[i - 1] = m_contacts[i];
			++i;
		}
		--m_numContacts;
	}
	m_contacts[m_numContacts++] = contact;
}

void PhoneBook::displayContacts() const {
	int i = 0;
    while (i < m_numContacts) 
	{
		std::cout << std::setw(10) << std::right << i << " | "
        	<< std::setw(10) << std::right << limitString(m_contacts[i].getFirstName(), 10) << " | "
          	<< std::setw(10) << std::right << limitString(m_contacts[i].getLastName(), 10) << " | "
          	<< std::setw(10) << std::right << limitString(m_contacts[i].getNickname(), 10) << std::endl;
		++i;
    }
}

size_t PhoneBook::get_numContacts() {
	return (m_numContacts);
}

void PhoneBook::displayContact(int index) const
{
	std::cout << "First Name: " << m_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << m_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << m_contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << m_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << m_contacts[index].getDarkestSecret() << std::endl;
}

std::string limitString(std::string str, size_t length) 
{
    if (str.length() > length) {
        str = str.substr(0, length - 1) + ".";
    }
    return str;
}

