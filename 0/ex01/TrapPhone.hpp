#ifndef TRAPPHONE_HPP
#define TRAPPHONE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickname;
    std::string m_phoneNumber;
    std::string m_darkestSecret;

public:
    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);

    bool isEmpty() const;
};

class PhoneBook {
private:
    Contact m_contacts[8];
    int m_numContacts;

public:
    PhoneBook();
    void addContact(const Contact& contact);
    void displayContacts() const;
    void displayContact(int index) const;
    size_t get_numContacts();
};

std::string limitString(std::string str, size_t length);

#endif