#include <iostream>

std::string upper(std::string str)
{
	std::string upper_str;
	for (size_t i = 0; i < str.length(); i++)
	{
		upper_str += toupper(str[i]);
	}
	return upper_str;
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc - 1; i++)
			std::cout << upper(argv[i]) << " ";
		std::cout << upper(argv[argc - 1]) << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}