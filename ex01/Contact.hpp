# ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		Contact(std::string firstname, std::string lastname, std::string nickname, std::string darksecret, std::string number);
		Contact(const Contact &c);
		~Contact();
		Contact &operator=(const Contact &c);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string _darksecret;
		std::string _number;
};
#endif