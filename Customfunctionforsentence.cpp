// Customfunctionforsentence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Another custom function with a for loop. I am going to call the function multiple times.

#include <iostream>

std::string userinput()
{
	std::string input{};
	std::cout << "Please input a string: ";
	std::cin >> input;
	return input;
}

int main()
{
	std::string a{ userinput() };
	std::string b{ userinput() };
	std::string c{ userinput() };
	std::string d{ userinput() };
	for (int timer = 0; timer < 5; ++timer)
	{
		std::cout << a + b + c + d << "." << std::endl;
	}
	return 0;
}