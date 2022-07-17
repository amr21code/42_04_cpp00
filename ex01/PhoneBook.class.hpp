/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:31:00 by anruland          #+#    #+#             */
/*   Updated: 2022/07/17 17:11:17 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <string>
#include <iostream>
#include "Contact.class.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);
		std::string 	getEntry(int iInfo, int iEntry) const;
		void		 	setEntry(int iInfo, std::string Input);
		void			updiEntry(void);
		int				getmEntryCnt(void) const;
		void			incmEntryCnt(void);
		int				getmiEntry(void) const;
		void			incmiEntry(void);

	private:

		Contact pList[8];
		int		mEntryCnt;
		int		miEntry;
};

#endif