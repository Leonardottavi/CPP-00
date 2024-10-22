/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_functions.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:00:39 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/22 17:00:51 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_FUNCTIONS_HPP
#define CONTACT_FUNCTIONS_HPP

#include <vector>
#include "contact.hpp"

std::string truncate(const std::string& str, size_t width);
void printContacts(const std::vector<Contact>& contacts);
void displayContact(const Contact& contact);
void searchContact(const std::vector<Contact>& contacts);
void addContact(std::vector<Contact>& contacts);

#endif
