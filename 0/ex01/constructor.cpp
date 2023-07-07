/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:13:37 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/08 00:43:26 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TrapPhone.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) :
    m_firstName(firstName),
    m_lastName(lastName),
    m_nickname(nickname),
    m_phoneNumber(phoneNumber),
    m_darkestSecret(darkestSecret) {}

PhoneBook::PhoneBook() : m_numContacts(0) 
{
    for (int i = 0; i < 8; i++) {
        m_contacts[i] = Contact();
    }
}
