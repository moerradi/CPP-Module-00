#include "PhoneBook.hpp"



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

void	PhoneBook::searchContact() {
	int l;
	l = (_nbContacts > 8) ? 8 : _nbContacts;
	std::cout <<std::setw(10) << "Index"  << " | ";
	std::cout << std::setw(10) << "First Name" << " | ";
	std::cout << std::setw(10) << "Last Name" << " | ";
	std::cout << std::setw(10) << "Nickname" << " |"<< std::endl;
	for (int i = 0; i < l; i++)
	{
		std::cout << std::setw(10) << i << " | ";
		_contacts[i].printRow();
		std::cout << std::endl;
	}
}

void	PhoneBook::searchContact(int index) {
	if (index > _nbContacts - 1)
		std::cout << "Contact not found !" << std::endl;
	else if (index > 7)
		std::cout << "Index out of range !" << std::endl;
	else
		_contacts[index].printDetails();
}