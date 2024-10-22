/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:28:30 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/22 17:01:32 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "contact_functions.hpp"

int main() {
	std::vector<Contact> contacts;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD") {
			addContact(contacts);
		} else if (command == "SEARCH") {
			searchContact(contacts);
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command. Please try again." << std::endl;
		}
	}

	return 0;
}
