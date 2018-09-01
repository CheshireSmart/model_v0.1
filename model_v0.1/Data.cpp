#include "stdafx.h"
#include "Data.h"


/******************************************************************************************************/

Data::Data()
{
	std::cout << "(constr Data)\n";
}


Data::~Data()
{
	std::cout << "(destr Data)\n";
}

/****************************************************************************************************/


MyHandle::MyHandle()
{
}


MyHandle::~MyHandle()
{
}

/**************************************************************************************************************************/

bool File_format::set_HANDLE(HANDLE f)
{
	this->file = f;
	return false;
}

bool File_format::send(std::unique_ptr<Recipient> recipient)
{
	std::cout << "/send_File_to_" << recipient->get_name() << "/";
	return false;;
}

File_format::File_format()
{
	std::cout << "constr(File)";
}

File_format::~File_format()
{
	std::cout << "destr(File)";
}


/*************************************************************************************************************************/

void Symb_format::set_prod()
{
	//if(isset(this))
	std::cout << "/(if)set_Prod/";// проверить на наличие продукта в базе
	//else set(this);
	//std::cin >> this->prod_name;
	//std::cout << "\n";
	/*this->set_prod_content = ... установить состав*/
}

bool Symb_format::send_to_db(Recipient *recipient)
{
	/*алгоритм отправки в бд*/
	std::cout << "/send_Prod_to_DB/";
	//std::vector <std::string> col_name;

	//std::vector <std::string> col_val;

	/*if (db.store(this->prod_name, col_name, col_val))
		return true;
	else
		return false;*/
	return false;
}

bool Symb_format::send_to_net(Recipient *recipient)
{
	/*алгоритм отправки по сети*/
	std::cout << "/send_Prod_to_Net/";
	return false;
}


bool Symb_format::send(std::unique_ptr<Recipient> recipient)
{
	std::cout << "/send_Prod_to_" << recipient->get_name() << "/";
	return false;
}


Symb_format::Symb_format()
{
	std::cout << "(constr Prod)\n";
	//this->set_prod();
}


Symb_format::~Symb_format()
{
	std::cout << "(destr Prod)\n";
}

