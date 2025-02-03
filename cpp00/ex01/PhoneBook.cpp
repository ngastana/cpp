/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:00:45 by ngastana          #+#    #+#             */
/*   Updated: 2025/01/31 12:22:02 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contacts::clear()
{
	_Name.clear();
	_LastName.clear();
	_Nickname.clear();
	_PhoneNumber.clear();
	_DarkestSecret.clear();
}

PhoneBook::PhoneBook() : _index(0) , _count(0)
{
	for (int i = 0; i < 8; i++)
		_contacts[i].clear();
		
}
PhoneBook::~PhoneBook() {}

Contacts::Contacts() {}
Contacts::~Contacts() {}

std::string getLastWord(const std::string phrase) 
{
    std::istringstream stream(phrase);
    std::string word, lastWord;

    while (stream >> word) 
	{
        lastWord = word;
    }
    return lastWord;
}

std::string getInput(std::string prompt)
{
	int i = 0;
	std::cout << prompt;
	std::string name;
	if(!std::getline(std::cin, name))
	{
		if (std::cin.eof())
				exit (1);
		else
		{
			std::cerr << "\033[31mSomething went wrong\033[0m" << std::endl;
			exit(1);
		}
	}
	if (!name[i])
	{	
		std::cout << "\033[31mEmpty contact information not allowed\033[0m" << std::endl;
		return (getInput(prompt));	
	}
	while (name[i] == ' ')
		i++;
	while (name[i])
	{
		if (!isalpha(name[i]) && name[i] != ' ')
		{	
			std::cout << "\033[31m" << getLastWord(prompt) << " badly written\033[0m" << std::endl;
			return (getInput(prompt));	
		}
		i++;
	}
	return (name);
}

std::string getInputNumber(std::string prompt)
{
	int i = 0;
	std::cout << prompt;
	std::string name;
	if(!std::getline(std::cin, name))
	{
		if (std::cin.eof())
						exit (1);
			else
			{
				std::cerr << "\033[31mSomething went wrong\033[0m" << std::endl;
				exit(1);
			}
	}
	if (!name[i])
	{	
		std::cout << "\033[31mEmpty contact information not allowed\033[0m" << std::endl;
		return (getInputNumber(prompt));	
	}
	while (name[i] == ' ')
		i++;
	while (name[i])
	{
		if (!isdigit(name[i]))
		{	
			std::cout << "\033[31m" << getLastWord(prompt) << " badly written\033[0m" << std::endl;
			return (getInputNumber(prompt));
		}
		i++;
	}
	return (name);
}

std::string Contacts::getName()
{
	return _Name;
}

std::string Contacts::getLastName()
{
	return _LastName;
}

std::string Contacts::getNickname()
{
	return _Nickname;
}

std::string Contacts::getPhoneNumber()
{
	return _PhoneNumber;
}

std::string Contacts::getDarkestSecret()
{
	return _DarkestSecret;
}

void Contacts::setName(std::string name)
{
	_Name = name;
}

void Contacts::setLastName(std::string name)
{
	_LastName = name;
}

void Contacts::setNickName(std::string name)
{
	_Nickname = name;
}

void Contacts::setPhoneNumber(std::string name)
{
	_PhoneNumber = name;
}

void Contacts::setDarkestSecret(std::string name)
{
	_DarkestSecret = name;
}

void PhoneBook::addContact()
{
	std::string name;

	_contacts[_index].setName(getInput("Write the contact name "));
	_contacts[_index].setLastName(getInput("Write the lastname "));
	_contacts[_index].setNickName(getInput("Write the nickname "));
	_contacts[_index].setPhoneNumber(getInputNumber("Write the phone number "));
	_contacts[_index].setDarkestSecret(getInput("Write the darkest secret "));
	std::cout << "\033[32mContact number " << _index << " added successfully\033[0m" << std::endl;
	_index++;
	if (_count < 8)
		_count++;
	if (_index == 8)
		_index = 0;
	//std::system("clear");
}

std::string PhoneBook::truncate(const std::string str)
{
	return (str.size() > 10 ? str.substr(0,9) + "."  : str);
}

static int stringToInt(const std::string &str)
{
	std::istringstream iss(str);
	int num = 0;
	iss >> num; // Intenta convertir la cadena en un número
	if (iss.fail() || !iss.eof()) // Si la conversión falla o hay caracteres extraños
	{
		std::cerr << "\033[31mError: invalid number format\033[0m" << std::endl;
		return -1; // Devuelve un valor inválido
	}
	return num;
}


void PhoneBook::searchContact()
{
	std::string contactnum;
	
	if (_count == 0)
	{
		std::cout << "In this moment you don't have any contact " << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "Name" << "|"
			<< std::setw(10) << "LastName" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; _count > i; i++)
	{
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << truncate(_contacts[i].getName()) << "|"
				<< std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
				<< std::setw(10) << truncate(_contacts[i].getNickname()) << "|" << std::endl;
	}
	std::cout << "What contact you want to search? " << std::endl;
	if (!getline(std::cin, contactnum))
	{
		if (std::cin.eof())
			exit (1);
		else
		{
			std::cerr << "\033[31mSomething went wrong\033[0m" << std::endl;
			exit(1);
		}
	}
	int searchindex = stringToInt(contactnum);
	for (int i = -1; contactnum[++i];)
	{
		if (!isdigit(contactnum[i]) || searchindex > 7)
		{
			std::cout << "\033[31mYou must put ONLY numbers between 0-7\033[0m" << std::endl;
			return ;
		}
		else if (searchindex >= _count)
		{
			std::cout << "\033[31mYou don't have more than " << _count << " contacts\033[0m" << std::endl;
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << "* Information of contact " << searchindex << " *" << std::endl;
	std::cout << std::endl;
	std::cout << "Name: " << _contacts[searchindex].getName() << std::endl;
	std::cout << "Last Name: " << _contacts[searchindex].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[searchindex].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[searchindex].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[searchindex].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::displayBanner ()
{
	std::string command;
	std::cout << "Introduce a command (ADD, SEARCH, EXIT): ";
	if(!std::getline(std::cin, command) || command == "EXIT" || command == "exit")
	{
		std::system("clear");
		exit (1);
	}
	else if(command == "ADD" || command == "add")
	{
		addContact();
	}
	else if(command == "SEARCH" || command == "search")
	{
		searchContact();
	}
	else
	{
		std::cout << "\033[31mUnknown command. Try it again.\033[0m" << std::endl;
	}
}

int main()
{
	PhoneBook phoneBook;
	Contacts contacts;

	while (true) 
	{
		phoneBook.displayBanner();
	}
	return 0;
}