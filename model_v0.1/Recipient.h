#pragma once


class Recipient//интерфейс передачи объктов
{



public:

	virtual bool connect() = 0;//interface of connect
	virtual std::string get_name() = 0;//name of recipient

	Recipient();
	virtual ~Recipient();
};

/********************************************************************************************************/


class DB_conn : public Recipient
{
	std::string name = "(BD_conn)";
	//DB_format connection_str;

public:
	bool connect();
	std::string get_name();

	DB_conn();
	~DB_conn();
};

/***********************************************************************************************************/


class Net_conn : public Recipient
{
	std::string name = "(Net_conn)";
	//Net_format connection_str;

public:
	bool connect();
	std::string get_name();

	Net_conn();
	~Net_conn();
};
