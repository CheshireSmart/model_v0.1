#include "stdafx.h"
#include "Viewer.h"

int Viewer::ret_data()//проверить в классе информаторе об установленных модулях
{
	std::cout << "choose what are you want to create..\n";
	int choice(0);
	std::map<int, std::string>::iterator it;
	for (it = Groups_of_obj.begin(); it != Groups_of_obj.end(); ++it)
		std::cout << it->first << ". " << it->second << "\n";//запихнуть числа первого значения в массив а потом выбор пользователя сравнить наличием его выбора в массиве
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	bool tmp(false);
	for (it = Groups_of_obj.begin(); it != Groups_of_obj.end(); ++it)
	{
		if (it->first == choice)
		{
			std::cout << "Your choice is: " << it->first << "-" << it->second << "\n"; tmp = true;
			break;
		}
	}
	if (!tmp)
		std::cout << "Wrong or module is not installed!!\n";

	return choice;
}

int Viewer::ret_sender()
{
	std::cout << "choose where are you want to send..\n";
	int choice(0);
	std::map<int, std::string>::iterator it;
	for (it = Groups_of_sender.begin(); it != Groups_of_sender.end(); ++it)
		std::cout << it->first << ". " << it->second << "\n";//запихнуть числа первого значения в массив а потом выбор пользователя сравнить наличием его выбора в массиве
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	bool tmp(false);
	for (it = Groups_of_sender.begin(); it != Groups_of_sender.end(); ++it)
	{
		if (it->first == choice)
		{
			std::cout << "Your choice is: " << it->first << "-" << it->second << "\n"; tmp = true;
			break;
		}
	}
	if (!tmp)
		std::cout << "Wrong or module is not installed!!\n";

	return choice;
}

Viewer::Viewer()
{
	std::cout << "(consrt Viewer)\n";
}


Viewer::~Viewer()
{
	std::cout << "(desrt Viewer)\n";
}
