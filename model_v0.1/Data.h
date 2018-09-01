#pragma once
#include "Recipient.h"
#include "Data.h"



class Data
{

public:
	virtual bool send(std::unique_ptr<Recipient> recipient) = 0;//интерфейс 
	//static int choice();// интерфейс выбора когда требуетя выбрать параметр из cуществующих


	Data();
	virtual ~Data();
};

/*********************************************************************************************************************************/

class MyHandle
{
	/*данные идентифицирующие определенную структуру данных или стандартный файл*/
	std::string name = "this is MyHandle\n";
public:
	MyHandle();
	~MyHandle();
};


/**************************************************************************************************************************
* пользовательская структура описывает файл из набора бит с нач и конечн битом
* для создания объекта данных передачи по сети
*/
class File_format : public Data
{
	MyHandle meta_file;//дескриптор мой для описания файла
	HANDLE file;//указатель на файл
	bool set_HANDLE(HANDLE f);//указатель на файл


public:
	bool send(std::unique_ptr<Recipient> recipient);

	File_format();
	~File_format();
};

/****************************************************************************************************************************/
class Symb_format : public Data
{
	std::string prod_name;
	MyHandle file;

	void set_prod();//установить значения объекта
	bool send_to_db(Recipient *recipient);
	bool send_to_net(Recipient *recipient);


public:

	bool send(std::unique_ptr<Recipient> recipient);//отправить получателю



	Symb_format();
	~Symb_format();
};
