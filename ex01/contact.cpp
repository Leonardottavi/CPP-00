/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:57:59 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/22 17:01:13 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "contact_functions.hpp"

std::string truncate(const std::string& str, size_t width) {
	if (str.length() > width) {
		return str.substr(0, width - 1) + ".";
	}
	return str;
}

void printContacts(const std::vector<Contact>& contacts) {
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(43, '-') << std::endl;

	for (std::vector<Contact>::const_iterator it = contacts.begin(); it != contacts.end(); ++it) {
		const Contact& contact = *it;
		std::cout << std::setw(10) << contact.index << "|"
				  << std::setw(10) << truncate(contact.firstName, 10) << "|"
				  << std::setw(10) << truncate(contact.lastName, 10) << "|"
				  << std::setw(10) << truncate(contact.nickname, 10) << std::endl;
	}
}

void displayContact(const Contact& contact) {
	std::cout << "Index: " << contact.index << std::endl;
	std::cout << "First Name: " << contact.firstName << std::endl;
	std::cout << "Last Name: " << contact.lastName << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone Number: " << contact.phoneNum << std::endl;
	std::cout << "Dark Secret: " << contact.darkSecret << std::endl;
}

void searchContact(const std::vector<Contact>& contacts) {
	printContacts(contacts);
	std::cout << "Enter the index of the contact to display: ";
	int index;
	std::cin >> index;

	if (index < 1 || index > static_cast<int>(contacts.size())) {
		std::cout << "Invalid index. Please try again." << std::endl;
	} else {
		displayContact(contacts[index - 1]);
	}
}

void addContact(std::vector<Contact>& contacts) {
	Contact newContact;
	newContact.index = contacts.size() + 1;
	std::cout << "Enter first name: ";
	std::cin >> newContact.firstName;
	std::cout << "Enter last name: ";
	std::cin >> newContact.lastName;
	std::cout << "Enter nickname: ";
	std::cin >> newContact.nickname;
	std::cout << "Enter phone number: ";
	std::cin >> newContact.phoneNum;
	std::cout << "Enter darkest secret: ";
	std::cin >> newContact.darkSecret;

	if (contacts.size() >= 8) {
		contacts.erase(contacts.begin());
		for (size_t i = 0; i < contacts.size(); ++i) {
			contacts[i].index = i + 1;
		}
		newContact.index = contacts.size() + 1;
	}

	contacts.push_back(newContact);
	std::cout << "Contact added successfully!" << std::endl;
}
