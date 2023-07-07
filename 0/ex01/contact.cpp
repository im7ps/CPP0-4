/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trapphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:48 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/08 00:19:15 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TrapPhone.hpp"

std::string Contact::getFirstName() const 
{
    return m_firstName;
}

std::string Contact::getLastName() const 
{
    return m_lastName;
}

std::string Contact::getNickname() const 
{
    return m_nickname;
}

std::string Contact::getPhoneNumber() const 
{
    return m_phoneNumber;
}

std::string Contact::getDarkestSecret() const 
{
    return m_darkestSecret;
}

void Contact::setFirstName(std::string firstName) 
{
    m_firstName = firstName;
}

void Contact::setLastName(std::string lastName) 
{
    m_lastName = lastName;
}

void Contact::setNickname(std::string nickname) 
{
    m_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) 
{
    m_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) 
{
    m_darkestSecret = darkestSecret;
}

bool Contact::isEmpty() const 
{
    return (m_firstName.empty() || m_lastName.empty() || m_nickname.empty() || m_phoneNumber.empty() || m_darkestSecret.empty());
}