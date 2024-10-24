/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:34:41 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/24 16:15:35 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>
#include <limits>
#include <sstream>
#include <csignal>

void searchCommand(const Phonebook& phonebook) {
	phonebook.searchContact();
	std::string input;
	int index;

	while (true) {
		std::cout << "Enter contact index to view details or 'PREV' to return to menu: ";
		if (!(std::cin >> input)) {
			if (std::cin.eof()) {
				std::cin.clear();
				std::cout << "\nEOF received. Returning to menu..." << std::endl;
				return;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a valid index." << std::endl;
			continue;
		}

		if (input == "PREV") {
			return; // Torna al menu principale
		}

		std::istringstream iss(input);
		if (!(iss >> index) || index < 1 || index > phonebook.getContactCount()) {
			std::cout << "Invalid input. Please enter a valid index." << std::endl;
			continue;
		}

		break;
	}
	phonebook.viewContact(index - 1); // L'indice dell'utente è 1-based
}

int main() {

	Phonebook phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!(std::cin >> command)) {
			if (std::cin.eof()) {
				std::cin.clear();
				std::cout << "\nEOF received. Exiting gracefully..." << std::endl;
				break;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please try again." << std::endl;
			continue;
		}

		if (command == "ADD") {
			std::string firstName, lastName, nickname, phoneNum, darkSecret;
			std::cout << "Enter first name: ";
			if (!(std::cin >> firstName)) break;
			std::cout << "Enter last name: ";
			if (!(std::cin >> lastName)) break;
			std::cout << "Enter nickname: ";
			if (!(std::cin >> nickname)) break;
			std::cout << "Enter phone number: ";
			if (!(std::cin >> phoneNum)) break;
			std::cout << "Enter darkest secret: ";
			if (!(std::cin >> darkSecret)) break;

			Contact newContact(firstName, lastName, nickname, phoneNum, darkSecret);
			phonebook.addContact(newContact);
		} else if (command == "SEARCH") {
			searchCommand(phonebook);
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command. Please try again." << std::endl;
		}
	}

	return 0;
}
