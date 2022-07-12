/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:49:42 by anruland          #+#    #+#             */
/*   Updated: 2022/07/12 18:50:55 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <iostream>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhoneNbr(void) const;
		std::string	getDarkSecret(void) const;

		void		setFirstName(std::string FirstName);
		void		setLastName(std::string LastName);
		void		setNickName(std::string NickName);
		void		setPhoneNbr(std::string PhoneNbr);
		void		setDarkSecret(std::string DarkestSecret);

	private:

		std::string	mFirstName;
		std::string	mLastName;
		std::string mNickName;
		std::string mPhoneNbr;
		std::string mDarkestSecret;

};

#endif