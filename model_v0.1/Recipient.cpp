#include "stdafx.h"
#include "Recipient.h"



Recipient::Recipient()
{
}


Recipient::~Recipient()
{
}

/**********************************************************************************************/

bool DB_conn::connect()
{
	std::cout << "/connect_DB/";
	return false;
}

std::string DB_conn::get_name()
{
	return this->name;
}

DB_conn::DB_conn()
{
	std::cout << "constr(DB)";
}


DB_conn::~DB_conn()
{
	std::cout << "destr(DB)";
}

/*****************************************************************************************************/

bool Net_conn::connect()
{
	std::cout << "/connect_net/";
	return false;
}

std::string Net_conn::get_name()
{
	return this->name;
}



Net_conn::Net_conn()
{
	std::cout << "constr(Net)";
}


Net_conn::~Net_conn()
{
	std::cout << "destr(Net)";
}
