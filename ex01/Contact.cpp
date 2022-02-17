#include "Contact.hpp"

Contact::Contact(){
	_firstname = "";
	_lastname = "";
	_nickname = "";
	_darksecret = "";
	_number = "";
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
