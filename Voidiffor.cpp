// Voidiffor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Practice file combining custom functions, if statements and a while loop.

#include <iostream>

//For string inputs

std::string stringinput()
{
	std::string name{};
	std::cout << "Please tell us your name: "; 
	std::cin >> name; '\n';
	return name;
}

// int inputs

int intinput()
{
	int userinput{};
	std::cout << "Please input a number less than 5: ";
	std::cin >> userinput; '\n';
	return userinput;
}

int main()
{
	int timer{ intinput() };
	if (timer < 5)
	{
		std::string username{ stringinput() };
		while (timer < 5)
		{
			std::cout << "So your name is " << username << "." << std::endl;
			timer = timer + 1;
		}
	}
	else
		std::cout << "The number " << timer << " is not less than 5."; '\n';

	return 0;
}

