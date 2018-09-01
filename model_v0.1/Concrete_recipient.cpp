#include "stdafx.h"
#include "Concrete_recipient.h"


int Concrete_recipient::class_id()
{
	std::cout << "choose where are you want to send..\n";
	int str;
	std::cout << "\t\t\tSend menu:\nRation(Day_win):\n\t1.net\n\t2.db\n";
	std::cin >> str;

	return str;
}

std::unique_ptr<Recipient> Concrete_recipient::sender(Viewer *id)
{
	//std::cout << "Creating a sender_ptr..\n";
	std::unique_ptr<Recipient> rec_smart = nullptr;
	/*выдать результаты установленных структур данных*/
	//int tmp = Concrete_recipient::class_id();
	int tmp = id->ret_sender();

	switch (tmp)
	{
	case 1:
		rec_smart = std::unique_ptr<Net_conn>(new Net_conn); return rec_smart;
		break;
	case 2:
		rec_smart = std::unique_ptr<DB_conn>(new DB_conn); return rec_smart;
		break;
	default:
		std::cout << "Modul is not installed..\n";
		return rec_smart;
		break;
	}
	return rec_smart;
}

Concrete_recipient::Concrete_recipient()
{
	std::cout << "constr(Concrete_recipient)";
}


Concrete_recipient::~Concrete_recipient()
{
	std::cout << "destr(Concrete_recipient)";
}