#include "PhoneBook.hpp"

Contact	inputcontact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string darksecret;
	std::string number;
	std::cout << "First name: ";
	std::cin >> firstname;
	std::cout << "Last name: ";
	std::cin >> lastname;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Dark secret: ";
	std::cin >> darksecret;
	std::cout << "Number: ";
	std::cin >> number;
	Contact c(firstname, lastname, nickname, darksecret, number);
	return (c);
}

int		main()
{
	PhoneBook	pb;
	std::string	cmd;
	bool		exit = false;
	while (!exit && (std::cout << "Enter a command : ") && (std::cin >> cmd))
	{
		if (cmd.compare("ADD") == 0)
			pb.addContact(inputcontact());
		else if (cmd.compare("SEARCH") == 0)
			pb.searchContact();
		else if (cmd.compare("EXIT") == 0)
			exit = true;
		else
			std::cout << "Invalid command !" << std::endl;
	}
}