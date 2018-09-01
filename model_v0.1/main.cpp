// razion.cpp: определяет точку входа для консольного приложения.
//





#include "stdafx.h"


//#include "Modules.h"

#include "Concrete_data.h"//what concrete to create for Data
#include "Concrete_recipient.h"//where concrete to send








/***************************************************
*по некоторому представленному выбору id, возвращает указатель unique_ptr на объект
*/

std::unique_ptr<Data> create_data(Viewer *id);
std::unique_ptr<Recipient> create_sender(Viewer *id);



int main()
{
	Viewer id;//create all constants using in prog //view model

/**************************************************************************************************/
		/*create msg*/
	std::unique_ptr<Data> msg = create_data(&id);// create a concrete obj
	if (msg == nullptr) { system("cls"); std::cout << "No data!!"; exit(1); }//no data to send
/*************************************************************************************************/


/*************************************************************************************************/
		/*create sender*/
	std::unique_ptr<Recipient> sender = create_sender(&id);//send a concrete obj
	if (sender == nullptr) { system("cls"); std::cout << "No sender!!"; exit(1); }//no sender to send
/*************************************************************************************************/


/*************************************************************************************************/
		/*start connection*/
	if (sender->connect() == false) { system("cls"); std::cout << "No connection!!"; exit(1); }//connection failed
	//msg->send(std::move(sender));
/*************************************************************************************************/


	system("pause");
	return 0;
}




std::unique_ptr<Data> create_data(Viewer *id)
{
	/*return a ptr to concreate data*/
	std::unique_ptr<Data> data_smart(Concrete_data::create(id));
	return data_smart;
}

std::unique_ptr<Recipient> create_sender(Viewer *id)
{
	/*return a ptr to concreate sender*/
	std::unique_ptr<Recipient> sender(Concrete_recipient::sender(id));
	return sender;
}
