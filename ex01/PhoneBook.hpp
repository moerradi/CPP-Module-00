#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"


class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		PhoneBook(const PhoneBook &p);
		PhoneBook &operator=(const PhoneBook &p);
		void addContact(Contact c);
		void searchContact(int index);
		void searchContact();
	private:
		Contact	_contacts[8];
		int		_nbContacts;
};

#endif