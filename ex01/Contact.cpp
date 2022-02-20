#include "Contact.hpp"

Contact::Contact(){
	_firstname = "";
	_lastname = "";
	_nickname = "";
	_darksecret = "";
	_number = "";
}

void	 printProp(std::string prop)
{
	if (prop.size() > 10)
   		std::cout << prop.substr(0, 9) << "." << " | ";
	else
		std::cout << std::setw(10) << prop << " | ";
}

Contact::~Contact(){
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string darksecret, std::string number){
	_firstname = firstname;
	_lastname = lastname;
	_nickname = nickname;
	_darksecret = darksecret;
	_number = number;
}

Contact::Contact(const Contact &c){
	_firstname = c._firstname;
	_lastname = c._lastname;
	_nickname = c._nickname;
	_darksecret = c._darksecret;
	_number = c._number;
}

Contact & Contact::operator=(const Contact &c){
	_firstname = c._firstname;
	_lastname = c._lastname;
	_nickname = c._nickname;
	_darksecret = c._darksecret;
	_number = c._number;
	return (*this);
}

std::string Contact::getFirstName(){
	return (_firstname);
}

std::string Contact::getLastName(){
	return (_lastname);
}

std::string Contact::getNickname(){
	return (_nickname);
}

void	Contact::printRow() {
	printProp(_firstname);
	printProp(_lastname);
	printProp(_nickname);
}

void	Contact::printDetails() {
	std::cout << std::left << std::setw(15) << "First name" << ":" << _firstname << std::endl;
	std::cout << std::left << std::setw(15) << "Last name" << ":" << _lastname << std::endl;
	std::cout << std::left << std::setw(15) << "Nickname" << ":" << _nickname << std::endl;
	std::cout << std::left << std::setw(15) << "Phone number" << ":" << _number << std::endl;
	std::cout << std::left << std::setw(15) << "Darkest secret" << ":" << _darksecret << std::endl;
}