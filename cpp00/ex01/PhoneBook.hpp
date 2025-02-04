#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <sstream>
#include <string>
#include <iomanip> 

class Contacts
{
	public:
		Contacts();
		~Contacts();

		void setName(std::string name);
		void setLastName(std::string lastname);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phonenumber);
		void setDarkestSecret(std::string lastname);

		std::string getName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		void clear();

	private:
		std::string _Name;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;	
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void searchContact();
		void addContact();
		void displayBanner();

		std::string truncate(const std::string str);

	private:
		Contacts	_contacts[8];
		int			_index;
		int			_count;
};

#endif
