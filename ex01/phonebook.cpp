/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:20 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/29 15:20:55 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : contactCount(0), nextIndex(0) {}

void Phonebook::addContact(const Contact& contact) {
	contacts[nextIndex] = contact;
	nextIndex = (nextIndex + 1) % 8;
	if (contactCount < 8) {
		contactCount++;
	}
	std::cout << "Contact added successfully." << std::endl;
}

void Phonebook::searchContact() const {
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contactCount; ++i) {
		std::cout << std::setw(10) << i + 1 << "|"
				  << std::setw(10) << contacts[i].getFirstName() << "|"
				  << std::setw(10) << contacts[i].getLastName() << "|"
				  << std::setw(10) << contacts[i].getNickname() << std::endl;
	}
}

void Phonebook::viewContact(int index) const {
	if (index >= 0 && index < contactCount) {
		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}

int Phonebook::getContactCount() const {
	return contactCount;
}
