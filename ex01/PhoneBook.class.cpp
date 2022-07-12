/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:21 by anruland          #+#    #+#             */
/*   Updated: 2022/07/12 18:42:29 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor" << std::endl;
	return;
}
