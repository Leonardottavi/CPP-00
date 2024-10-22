/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:38:02 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/22 17:01:57 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>

class Contact
{
public:
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNum;
	std::string darkSecret;
};

#endif
