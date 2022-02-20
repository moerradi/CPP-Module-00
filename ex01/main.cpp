#include "PhoneBook.hpp"


bool isNumber(const std::string& str)
{
    for (size_t i = 0 ; i < str.length() ; i++) {
        if (std::isdigit(str[i]) == 0) return false;
    }
    return true;
}

Contact	inputcontact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string darksecret;
	std::string number;
	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Dark secret: ";
	std::getline(std::cin, darksecret);
	std::cout << "Number: ";
	std::getline(std::cin, number);
	Contact c(firstname, lastname, nickname, darksecret, number);
	return (c);
}

int		main()
{
	PhoneBook	pb;
	std::string	cmd;
	std::string index;
	bool		exit = false;
	while (!exit && (std::cout << "Enter a command : ") && std::getline(std::cin, cmd))
	{
		if (!cmd.compare("ADD"))
			pb.addContact(inputcontact());
		else if (!cmd.compare("SEARCH"))
		{
			pb.searchContact();
			std::cout << "Please enter an index to display details : ";
			std::getline(std::cin, index);
			if (!isNumber(index))
				std::cout << "Index must be a numeric value !" << std::endl;
			else
				pb.searchContact(std::stoi(index));
		}
		else if (!cmd.compare("EXIT"))
			exit = true;
		else
			std::cout << "Invalid command !" << std::endl;
	}
}