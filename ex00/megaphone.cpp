/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:30:26 by lottavi           #+#    #+#             */
/*   Updated: 2024/10/22 14:46:07 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int cur = 1;
		while (av[cur] != NULL)
		{
			int acur = 0;
			while (av[cur][acur])
			{
				av[cur][acur] = std::toupper(av[cur][acur]);
				acur++;
			}
			std::cout << av[cur];
			cur++;
		}
		std::cout << std::endl;
	}
}
