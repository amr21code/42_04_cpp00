/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:21 by anruland          #+#    #+#             */
/*   Updated: 2022/07/13 15:08:33 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	// std::cout << "Constructor PB" << std::endl;
	miEntry = 0;
	mEntryCnt = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor PB" << std::endl;
	return;
}

void	PhoneBook::setEntry(int iInfo, std::string Input) 
{
	switch (iInfo)
	{
		case 0:
			pList[this->miEntry].setFirstName(Input);
		break;

		case 1:
			pList[this->miEntry].setLastName(Input);
		break;

		case 2:
			pList[this->miEntry].setNickName(Input);
		break;

		case 3:
			pList[this->miEntry].setPhoneNbr(Input);
		break;

		case 4:
			pList[this->miEntry].setDarkSecret(Input);
		break;
	}
}

std::string	PhoneBook::getEntry(int iInfo, int iEntry) const
{
	switch (iInfo)
	{
		case 0:
			return pList[iEntry].getFirstName();
		break;

		case 1:
			return pList[iEntry].getLastName();
		break;

		case 2:
			return pList[iEntry].getNickName();
		break;

		case 3:
			return pList[iEntry].getPhoneNbr();
		break;

		case 4:
			return pList[iEntry].getDarkSecret();
		break;
	}
	return "";
}

int	PhoneBook::getmEntryCnt(void) const
{
	return mEntryCnt;
}

void	PhoneBook::incmEntryCnt(void)
{
	if (mEntryCnt < 8)
		mEntryCnt++;
}

int	PhoneBook::getmiEntry(void) const
{
	return miEntry;
}

void	PhoneBook::incmiEntry(void)
{
	if (miEntry < 7)
		miEntry++;
	else
		miEntry = 0;
}