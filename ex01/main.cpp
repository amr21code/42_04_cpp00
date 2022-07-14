/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:16:18 by anruland          #+#    #+#             */
/*   Updated: 2022/07/14 12:26:33 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <cstdio>

void	pbAdd(PhoneBook *pPhoneBook);
void	pbSearch(PhoneBook *pPhoneBook);

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	Input;
	
	std::cout << "Crappy Awesome Phonebook" << std::endl;
	std::cout << "Commands: ADD, SEARCH or EXIT" << std::endl;
	while (Input != "EXIT")
	{
		std::cout << "Enter Command: ";
		std::getline(std::cin, Input);
		if (std::cin.eof())
		{
			Input = "EXIT";
			std::cout << std::endl;
		} 
		if (Input == "ADD")
			pbAdd(&PhoneBook);
		else if (Input == "SEARCH")
			pbSearch(&PhoneBook);
	}
	return (0);
}

std::string pbDefaultValue(std::string Input, std::string Default)
{
	if (Input == "")
		return (Default);
	else
		return (Input);
}

std::string	pbSerachPrintElem(std::string Entry)
{
	if (Entry.length() <= 10)
		Entry.insert(Entry.begin(), 10 - Entry.length(), ' ');
	else
		Entry = Entry.substr(0, 9) + '.';
	return Entry;
}

void	pbSearchPrint(PhoneBook *pPhoneBook)
{
	int	iEntry;
	std::string Entry;

	iEntry = 0;
	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	while (iEntry < pPhoneBook->getmEntryCnt())
	{
		std::cout << "         " << iEntry << "|";
		Entry = pbSerachPrintElem(pPhoneBook->getEntry(0, iEntry));
		std::cout << Entry << "|";
		Entry = pbSerachPrintElem(pPhoneBook->getEntry(1, iEntry));
		std::cout << Entry << "|";
		Entry = pbSerachPrintElem(pPhoneBook->getEntry(2, iEntry));
		std::cout << Entry << std::endl;
		iEntry++;
	}
}

int checkSearchInput(std::string Input, int EntryCnt)
{
	if (Input.length() != 1)
		return (0);
	if (Input[0] > 47 && Input[0] < 56)
	{
		if ((Input[0] - 48) < EntryCnt)
			return (1);
	}
	return (0);
}

void	pbSearch(PhoneBook *pPhoneBook)
{
	std::string	iEntry;

	iEntry = "wrong";
	if (!pPhoneBook->getmEntryCnt())
		return;
	pbSearchPrint(pPhoneBook);
	while (!checkSearchInput(iEntry, pPhoneBook->getmEntryCnt()))
	{
		std::cout << "Enter Index: ";
		getline(std::cin, iEntry);
	}
	std::cout << "First Name: " << pPhoneBook->getEntry(0, (iEntry[0] - 48)) << std::endl;
	std::cout << "Last Name: " << pPhoneBook->getEntry(1, (iEntry[0] - 48)) << std::endl;
	std::cout << "Nick Name: " << pPhoneBook->getEntry(2, (iEntry[0] - 48)) << std::endl;
	std::cout << "Phone Number: " << pPhoneBook->getEntry(3, (iEntry[0] - 48)) << std::endl;
	std::cout << "Darkest Secret: " << pPhoneBook->getEntry(4, (iEntry[0] - 48)) << std::endl;
}

void	pbAdd(PhoneBook *pPhoneBook)
{
	std::string	Input;

	std::cout << "Enter Contact Details [Default]" << std::endl;
	std::cout << "First Name [John] ";
	getline(std::cin, Input);
	Input = pbDefaultValue(Input, "John");
	pPhoneBook->setEntry(0, Input);
	std::cout << "Last Name [Doe] ";
	getline(std::cin, Input);
	Input = pbDefaultValue(Input, "Doe");
	pPhoneBook->setEntry(1, Input);
	std::cout << "Nick Name [JD] ";
	getline(std::cin, Input);
	Input = pbDefaultValue(Input, "JD");
	pPhoneBook->setEntry(2, Input);
	std::cout << "Phone Number [555] ";
	getline(std::cin, Input);
	Input = pbDefaultValue(Input, "555");
	pPhoneBook->setEntry(3, Input);
	std::cout << "Darkest Secret [Superman] ";
	getline(std::cin, Input);
	Input = pbDefaultValue(Input, "Superman");
	pPhoneBook->setEntry(4, Input);
	pPhoneBook->incmEntryCnt();
	pPhoneBook->incmiEntry();
}