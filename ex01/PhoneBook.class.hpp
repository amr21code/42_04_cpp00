/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:31:00 by anruland          #+#    #+#             */
/*   Updated: 2022/07/12 18:46:55 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <string>
# include <iostream>
# include "Contact.class.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);
		std::string getEntry(void) const;

	private:

		Contact pList[8];
};

#endif