/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:36:46 by anruland          #+#    #+#             */
/*   Updated: 2022/07/13 14:27:09 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
	// std::cout << "Constructor" << std::endl;
	return;
}

Contact::~Contact(void) {
	// std::cout << "Destructor" << std::endl;
	return;
}

std::string	Contact::getFirstName(void) const {
	return mFirstName;
}

std::string	Contact::getLastName(void) const {
	return mLastName;
}

std::string	Contact::getNickName(void) const {
	return mNickName;
}

std::string	Contact::getPhoneNbr(void) const {
	return mPhoneNbr;
}

std::string	Contact::getDarkSecret(void) const {
	return mDarkestSecret;
}

void Contact::setFirstName(std::string FirstName) {
	mFirstName = FirstName;
	return;
}

void Contact::setLastName(std::string LastName) {
	mLastName = LastName;
	return;
}

void Contact::setNickName(std::string NickName) {
	mNickName = NickName;
	return;
}

void Contact::setPhoneNbr(std::string PhoneNbr) {
	mPhoneNbr = PhoneNbr;
	return;
}

void Contact::setDarkSecret(std::string DarkestSecret) {
	mDarkestSecret = DarkestSecret;
	return;
}

