#include "PhoneBook.hpp"

std::string minw(std::string sv, std::size_t width)
{
	if (sv.size() > width)
   		return (sv.substr(0, width - 1) + ".");
	else
		return (sv + std::string(width - sv.size(), ' '));
}

PhoneBook::PhoneBook(){
	_nbContacts = 0;
}

PhoneBook::PhoneBook(const PhoneBook &p){
	_nbContacts = p._nbContacts;
	for (int i = 0; i < 8; i++)
		_contacts[i] = p._contacts[i];
}

PhoneBook & PhoneBook::operator=(const PhoneBook &p){
	if (this == &p)
		return (*this);
	_nbContacts = p._nbContacts;
	for (int i = 0; i < 8; i++)
		_contacts[i] = p._contacts[i];
	return (*this);
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::addContact(Contact c){
	if (_nbContacts < 8)
		_contacts[_nbContacts] = c;
	else
		_contacts[_nbContacts % 8] = c;
	_nbContacts++;
	std::cout << "Contact added" << std::endl;
}

void	PhoneBook::searchContact(){
	std::cout <<minw("Index", 10) << " | " << minw("First Name", 10) << " | " << minw("Last Name", 10) << " | " << minw("Nickname", 10) << " |"<< std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << minw(std::to_string(i), 10) << " | ";
		std::cout << minw(_contacts[i].getFirstName(), 10) << " | ";
		std::cout << minw(_contacts[i].getLastName(), 10) << " | ";
		std::cout << minw(_contacts[i].getNickname(), 10) << " | " << std::endl;
	}
}
